#pragma once

#include "Arduino.h"

class flash_blinker
{
private:

    int _gpio;

public:

    flash_blinker(
        int flash_gpio,
        int flash_delay
    ) :
        _gpio(flash_gpio)
    {
        digitalWrite(_gpio, HIGH);
        delay(flash_delay);
    }

    ~flash_blinker(
    )
    {
        digitalWrite(_gpio, LOW);
    }
};
