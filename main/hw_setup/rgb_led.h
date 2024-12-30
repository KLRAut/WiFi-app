/*
 * @Author: mikey.zhaopeng 
 * @Date: 2024-11-02 23:21:58 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2024-11-02 23:48:45
 */

#ifndef MAIN_RGB_LED_H
#define MAIN_RGB_LED_H

// RGB LED GPIOs

#define RGB_LED_RED_GPIO        25
#define RGB_LED_GREEN_GPIO      26
#define RGB_LED_BLUE_GPIO       27

// RGB LED color mix chanels

#define RGB_LED_CHANNEL_NUM     3

// RGB LED configuration

typedef struct
{
    int channel;
    int gpio;
    int mode;
    int timer_index;
}ledc_info_t;


/*
 * Color to indicate WiFi application has started 
 */

void rgb_led_wifi_app_started(void);

/*
 * Color to indicate HTTP server has started 
 */

void rgb_led_http_server_started(void);

/*
 * Color to indicate that the ESP32 is connected to an access point. 
 */
 
void rgb_led_wifi_connected(void); 

#endif // !MAIN_RGB_LED_H

 