#pragma once

//
// INVARIANT: w_deleted_count <= w_deleting_count <= w_cached_read_count <= shared_read_count <= r_reading_count <= r_cached_write_count <= shared_write_count <= w_writing_count <= w_deleted_count + MAX_SIZE
//
// INVARIANT:      w_writing_count      - w_deleted_count     <= MAX_SIZE
// =========>      w_writing_count      - w_cached_read_count <= MAX_SIZE
// =========>      shared_write_count   - w_cached_read_count <= MAX_SIZE
// =========>      shared_write_count   - shared_read_count   <= MAX_SIZE
//
//
// INVARIANT: 0 <= r_cached_write_count - r_reading_count
// =========> 0 <= r_cached_write_count - shared_read_count
// =========> 0 <= shared_write_count   - shared_read_count
//
//
// THEOREM: =========> 0 <= shared_write_count   - shared_read_count   <= MAX_SIZE
//

//
//
// Channel/Queue:
//
// Shared between Producer and Consumer
//
struct channel_t
{
public:
  //insert your code here
  size_t s;
  size_t r;
  size_t b;
  size_t k;

public:
  //
  // Intialize
  //
  channel_t()
  {

    // insert your code here
    s = 0;
    r = 0;
    b = 4;
    k = 8;
  }
};

//
// Producer's (not shared)
//
struct writeport_t
{
public:
  //insert your code here
  size_t s;
  size_t r;
  size_t b;
  size_t k;

public:
  //
  // Intialize
  //
  writeport_t(size_t tsize)
  {
    //insert code here
    s = 0;
    r = 0;
    b = 4;
    k = 8;
  }

public:
  //
  // no of entries available to write
  //
  // helper function for write_canreserve
  //
  size_t write_reservesize()
  {

    // insert your code here

    if (s - r % k == b)
      return (size_t)0;

    size_t temp = s;
    size_t ret = 0;

    while ((temp - r) % k != b)
    {
      temp += 1;
      ret += 1;
    }
    return ret;
  }

  //
  // Can write 'n' entries?
  //
  bool write_canreserve(size_t n)
  {

    // insert your code here

    if (write_reservesize() >= n)
      return true;
    return false;
  }

  //
  // Reserve 'n' entries for write
  //
  size_t write_reserve(size_t n)
  {
    // insert your code here
    size_t temp = s;
    s = (s + n) % k;
    return temp%b;
  }

  //
  // Commit
  //
  // Read/Write shared memory data structure
  //
  void write_release(channel_t &ch)
  {

    // insert your code here
    ch.s = s;
  }

public:
  //
  //
  // Read/Write shared memory data structure
  //
  void read_acquire(channel_t &ch)
  {

    //insert your code here
    r = ch.r;
  }

  //
  // No of entires available to delete
  //
  size_t delete_reservesize()
  {
    //insert your code here
    return r%b;
  }

  //
  // Can delete 'n' entires?
  //
  bool delete_canreserve(size_t n)
  {
    //insert your code here
    if (delete_reservesize() >= n)
      return true;
    return false;
  }

  //
  // Reserve 'n' entires for deletion
  //
  size_t delete_reserve(size_t n)
  {
    //insert your code here
    return r%b;
  }

  //
  // Update the state, if any.
  //
  void delete_release()
  {
    //insert your code here
  }
};

//
// Consumer's (not shared)
//
//
struct readport_t
{
public:
  //insert your code here
  size_t s;
  size_t r;
  size_t b;
  size_t k;

public:
  //
  // Initialize
  //
  readport_t(size_t tsize)
  {

    //insert your code here
    s = 0;
    r = 0;
    b = 4;
    k = 8;
  }

public:
  //
  // Read/Write shared memory data structure
  //
  void write_acquire(channel_t &ch)
  {

    //insert your code here
    s = ch.s;
  }

  //
  // no of entries available to read
  //
  size_t read_reservesize()
  {

    //insert your code here
    size_t temp = r;

    size_t ret = 0;
    while ((s - temp) % k != 0)
    {
      temp += 1;
      ret += 1;
    }
    return ret;
  }

  //
  // Can Read 'n' entires?
  //
  bool read_canreserve(size_t n)
  {

    //insert your code here
    if (read_reservesize() >= n)
      return true;
    return false;
  }

  //
  // Reserve 'n' entires to be read
  //
  size_t read_reserve(size_t n)
  {

    //insert your code here
    size_t temp = r;
    r = (r+n)%k;
    return temp%b;
  }

  //
  // Read/write shared memory data structure
  //
  void read_release(channel_t &ch)
  {

    //insert your code here
    ch.r = r;
  }
};
