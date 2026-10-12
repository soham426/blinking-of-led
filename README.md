this is my first bare metal embedded programming project using ESP32 microcontroller.
the project blinks an LED by directly accessing GPIO registers.

FEATURES:
direct memory mapped register access
GPIO pin configuration using register manipulation 
software based delay loop

HARDWARE:
ESP32 development board
LED
resistor

LANGUAGE USED:
C/C++

NOTE:
This program uses a software delay so it may trigger the watchdog timer.
