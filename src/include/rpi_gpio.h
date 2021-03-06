/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Raspberry Pi Dasboard
 *  =====================
 *  Copyright 2014 Domen Ipavec <domen.ipavec@z-v.si>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef RPI_GPIO_H
#define RPI_GPIO_H

#define MAX_PINS 40
#define HWPWM 1

typedef enum {
    GPIO_UNDEFINED = 0,
    GPIO_INPUT = 1, 
    GPIO_OUTPUT = 2, 
    GPIO_PWM = 3,
    GPIO_TONE = 4
} gpio_mode_t;

typedef struct {
    gpio_mode_t mode;
    int pull;
    int value;
    long frequency;
    int range;
    int interrupts;
} gpio_pin_t;

void rpi_gpio_init(void);

#endif