#define LGFX_USE_V1

#include <Arduino.h>
#include <LovyanGFX.hpp>
#include <LGFX_ESP32C3_ILI.hpp>
#include <lvgl.h>
#include "ui.h"

LGFX tft;

/*Change to your screen resolution*/
static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

// LGFX tft = LGFX(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
	uint32_t w = (area->x2 - area->x1 + 1);
	uint32_t h = (area->y2 - area->y1 + 1);

	tft.startWrite();
	tft.setAddrWindow(area->x1, area->y1, w, h);
	tft.writePixels((lgfx::rgb565_t *)&color_p->full, w * h); // grayscale_t or display.writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
	tft.endWrite();

	lv_disp_flush_ready(disp);
}

/*
void ui_reset()
{
    lv_slider_set_value(ui_SpeedSlider, 0, LV_ANIM_OFF);
    lv_obj_clear_flag(ui_SpeedSlider, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_SpeedLabel, "0");
    lv_label_set_text(ui_SpeedLabel2, "0");
    lv_label_set_text(ui_SatellitesLabel, "0");
    lv_label_set_text(ui_CoordinatesLabel, "0\n0");
    lv_label_set_text(ui_AltitudeLabel, "0.00");
}
*/
/*
    lv_label_set_text(ui_SpeedLabel, String(mph, 0).c_str());
    lv_label_set_text(ui_SpeedLabel2, String(mph, 0).c_str());
    lv_slider_set_value(ui_SpeedSlider, int(mph), LV_ANIM_ON);

    coordinates += String(gps.location.lng(), 6);
    lv_label_set_text(ui_CoordinatesLabel, coordinates.c_str());

    lv_label_set_text(ui_CompassLabel, String(textDegree, 0).c_str());
    lv_label_set_text(ui_DegreeLabel, String(textDegree, 0).c_str());
    lv_img_set_angle(ui_CompassImg, (headingDegree * 10));
*/

void setup()
{
    Serial.begin(115200); /* prepare for possible serial debug */
#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

	tft.begin(); /* TFT init */
	lv_init();

	/*Set the touchscreen calibration data,
	 the actual data for your display can be acquired using
	 the Generic -> Touch_calibrate example from the TFT_eSPI library*/
	// uint16_t calData[5] = { 275, 3620, 264, 3532, 1 };
	// tft.setTouch( calData );

	lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);
	/*Initialize the display*/
	static lv_disp_drv_t disp_drv;
	lv_disp_drv_init(&disp_drv);
	/*Change the following line to your display resolution*/
	disp_drv.hor_res = screenWidth;
	disp_drv.ver_res = screenHeight;
	disp_drv.flush_cb = my_disp_flush;
	disp_drv.draw_buf = &draw_buf;
	lv_disp_drv_register(&disp_drv);

	tft.fillScreen(TFT_BLACK);
	tft.setRotation(1); /* Landscape orientation, flipped */

	/*Set the touchscreen calibration data,
	 the actual data for your display can be acquired using
	 the Generic -> Touch_calibrate example from the TFT_eSPI library*/
	// uint16_t calData[5] = { 275, 3620, 264, 3532, 1 };
	// display.setTouch( calData );

	lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

	String LVGL_Arduino = "Hello Arduino! ";
	LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

	Serial.println(LVGL_Arduino);
	Serial.println("I am LVGL_Arduino");

	/* Create simple label */
	lv_obj_t *label = lv_label_create(lv_scr_act());
	lv_label_set_text(label, LVGL_Arduino.c_str());
	lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

	ui_init();
}

uint32_t count = ~0;
void loop()
{
	/*
    DateTime now = rtc.now();
    int hour_ang = map(now.hour(), 0, 24, 0, 360);
    int min_ang = map(now.minute(), 0, 60, 0, 360);
    int sec_ang = map(now.second(), 0, 60, 0, 360);
    // lv_label_set_text(ui_TimeVal, "0.00");
    Serial.println(String(String(now.day() + now.month() + now.year())));
    // lv_label_set_text(ui_TimeVal, String(random(0, 100)).c_str());
    lv_label_set_text(ui_Clock_Number, String(now.timestamp(DateTime::TIMESTAMP_TIME)).c_str()); //String(now.timestamp(DateTime::TIMESTAMP_TIME) String(mph, 0)
    // lv_label_set_text(ui_Date, String(now.day() + now.month() + now.year()).c_str()); // lv_label_set_text(ui_Date, String(now.timestamp(DateTime::TIMESTAMP_DATE)).c_str());
    lv_img_set_angle(ui_Hour, (hour_ang * 10));
    lv_img_set_angle(ui_Min, (min_ang * 10));
    lv_img_set_angle(ui_Sec, (sec_ang * 10));
	*/

    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}