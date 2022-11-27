// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: display-project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_RootPanel;
lv_obj_t * ui_TopPanel;
lv_obj_t * ui_Title;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RootPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_RootPanel, 320);
    lv_obj_set_height(ui_RootPanel, 240);
    lv_obj_set_align(ui_RootPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RootPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_RootPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RootPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RootPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopPanel = lv_obj_create(ui_RootPanel);
    lv_obj_set_width(ui_TopPanel, 150);
    lv_obj_set_height(ui_TopPanel, 35);
    lv_obj_set_x(ui_TopPanel, 0);
    lv_obj_set_y(ui_TopPanel, -105);
    lv_obj_set_align(ui_TopPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Title = lv_label_create(ui_TopPanel);
    lv_obj_set_width(ui_Title, 76);
    lv_obj_set_height(ui_Title, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_Title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Title, "Sensors");
    lv_obj_set_style_text_font(ui_Title, &ui_font_Display16, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
