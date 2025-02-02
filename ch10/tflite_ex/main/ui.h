// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: ch10_gui

#ifndef _CH10_GUI_UI_H
#define _CH10_GUI_UI_H

#define CANVAS_WIDTH 300
#define CANVAS_HEIGHT 200

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_canvas;
extern lv_obj_t * ui_label1;


void ui_init(void);

void ui_setPoint(lv_coord_t x_pos, lv_coord_t y_pos);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
