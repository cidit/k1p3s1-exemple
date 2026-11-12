#pragma once
#include <Arduino.h>

namespace my_speed_feature
{
    enum LED_COLORS
    {
        RED,
        GREEN,
        BLUE,
        COLOR_COUNT
    };

    uint32_t delay_turned_on = 10000; // ms

    uint8_t _led_pins[LED_COLORS::COLOR_COUNT];
    uint32_t _turned_on_times[LED_COLORS::COLOR_COUNT];

    void led_enabled_now(LED_COLORS color)
    {
        if (color == COLOR_COUNT)
        {
            return; // not actually a valid color so index out of bounds error.
        }
        _turned_on_times[color] = millis();
    }

    void begin(uint8_t pin_rouge, uint8_t pin_vert, uint8_t pin_bleu);
    {
        _led_pins[RED] = pin_rouge;
        _led_pins[GREEN] = pin_vert;
        _led_pins[BLUE] = pin_bleu;
        // FIXME: il faut encore initialiser `_turned_on_times`...
    }

    void update()
    {
        for (size_t color = 0; color < COLOR_COUNT; color++) {
            if (_turned_on_times[color] + delay_turned_on <= millis()) {
                digitalWrite(color, HIGH);
            } else {
                digitalWrite(color, LOW);
            }
        }
    }

}
