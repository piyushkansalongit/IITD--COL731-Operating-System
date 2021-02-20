#pragma once
#include "util/config.h"
#include "util/debug.h"



struct shellstate_t{
    enum {
        NUMBER_MENU_ITEMS = 8,
        MAX_NUMBER_OF_MENU_ITEMS=10,
        MAX_WIDTH_OF_MENU_ITEMS=50,
        FIBER_TASKS=3,
        MAX_FIBER_INSTANCES_TASK=3,
        MAX_FIBER_INSTANCES_TOTAL=9
        };
    int num_of_keys_pressed;
    int num_of_menu_items;
    int max_num_of_menu_items;
    int max_width_of_menu_items;
    char menu_items[MAX_NUMBER_OF_MENU_ITEMS][MAX_WIDTH_OF_MENU_ITEMS];
    bool display_key_item;
    int selected_menu_item;
    bool on_home_page;
    char command[MAX_WIDTH_OF_MENU_ITEMS];
    int present_command_size;
    int previous_command_size;
    char outputs[NUMBER_MENU_ITEMS-1][MAX_NUMBER_OF_MENU_ITEMS][MAX_WIDTH_OF_MENU_ITEMS];
    int outputNumbers[NUMBER_MENU_ITEMS-1];
    bool clear_screen;
    bool showOutputs;
    bool clear_input_row;
    uint8_t previous_key;
    int coroutine_state;
    int fiber_state;
    bool inTransition;
    bool inTransition2;
    bool calculateOutput;
    bool allow_scheduling;
    int number_of_tasks_under_scheduling;
    int max_instances_under_scheduling;
    int number_of_fibers_running;
    int max_num_fibers;
    int present_running_row;
    int present_running_column;
    int fiber_states[FIBER_TASKS][MAX_FIBER_INSTANCES_TASK];
    int fiber_stackptr[FIBER_TASKS][MAX_FIBER_INSTANCES_TASK];
    int fiber_output_index[FIBER_TASKS][MAX_FIBER_INSTANCES_TASK];
    int fiber_stack_availability[MAX_FIBER_INSTANCES_TOTAL];

};

struct renderstate_t{
    enum {
    NUMBER_MENU_ITEMS = 8,
    MAX_NUMBER_OF_MENU_ITEMS=10,
    MAX_WIDTH_OF_MENU_ITEMS=50
    };
    int num_of_keys_pressed;
    int num_of_menu_items;
    int max_num_of_menu_items;
    int max_width_of_menu_items;
    char menu_items[MAX_NUMBER_OF_MENU_ITEMS][MAX_WIDTH_OF_MENU_ITEMS];
    bool display_key_item;
    int selected_menu_item;
    bool on_home_page;
    char command[MAX_WIDTH_OF_MENU_ITEMS];
    int present_command_size;
    int previous_command_size;
    char outputs[NUMBER_MENU_ITEMS-1][MAX_NUMBER_OF_MENU_ITEMS][MAX_WIDTH_OF_MENU_ITEMS]; 
    int outputNumbers[NUMBER_MENU_ITEMS-1];
    bool clear_screen;
    bool showOutputs;
    bool clear_input_row;
};

void shell_init(shellstate_t& state);
void shell_update(uint8_t scankey, shellstate_t& stateinout);
void shell_step(shellstate_t& stateinout);
void shell_render(const shellstate_t& shell, renderstate_t& render);

bool render_eq(const renderstate_t& a, const renderstate_t& b);
void render(const renderstate_t& state, int w, int h, addr_t display_base);