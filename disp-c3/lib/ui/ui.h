// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: display-project

#ifndef _DISPLAY-PROJECT_UI_H
#define _DISPLAY-PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_RootPanel;
extern lv_obj_t * ui_TopPanel;
extern lv_obj_t * ui_Title;




LV_FONT_DECLARE(ui_font_Display16);
LV_FONT_DECLARE(ui_font_Display20);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
