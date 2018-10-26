/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */


#ifndef _GUAC_TERMINAL_H
#define _GUAC_TERMINAL_H

#include "config.h"


/**
 * Maximum Arguments
 */
#define GUAC_TERMINAL_MAX_ARGUMENTS 16

/**
 * Erase Display
 */
#define GUAC_TERMINAL_ERASE_DISPLAY 2

/**
 * Erase Display including scrollbar
 */
#define GUAC_TERMINAL_ERASE_SCROLLBAR 3

/**
 * Device status report
 */
#define GUAC_TERMINAL_DEVICE_STATUS_REPORT 5

/**
 * Cursor position report
 */
#define GUAC_TERMINAL_CURSOR_POSITION_REPORT 6

/**
 * Clear tab stop at current position
 */
#define GUAC_TERMINAL_CLEAR_TAB_STOPS 3

/**
 * Erase from start of line to cursor
 */
#define GUAC_TERMINAL_ERASE_WHOLE_LINE 2

/**
 * Set scrolling region
 * parameters are top and bottom row
 */
#define GUAC_TERMINAL_SET_SCROLLING_REGION 2

/**
 * Set window title
 */
#define GUAC_TERMINAL_SET_WINDOW_TITLE 2

/**
 * Set ANSI Color
 */
#define GUAC_TERMINAL_SET_COLOR 4

/**
 * Faint(Decreased Intensity)
 */
#define GUAC_TERMINAL_FAINT 2

/**
 * Underline
 */
#define GUAC_TERMINAL_UNDERLINE_ON 4

/**
 * Reverse Video
 */
#define GUAC_TERMINAL_REVERSE_VIDEO 7

/**
 * Doubly Underline or Bold off
 */
#define GUAC_TERMINAL_DOUBLY_UNDERLINED 21

/**
 * Normal color or intensity
 */
#define GUAC_TERMINAL_NORMAL_INTENSITY 22

/**
 * Underline off
 */
#define GUAC_TERMINAL_UNDERLINE_OFF 24

/**
 * Inverse off
 */
#define GUAC_TERMINAL_REVERSE_VIDEO_OFF 27

/**
 * Set Black Foreground
 */
#define GUAC_TERMINAL_BLACK_FOREGROUND 30

/**
 * Set White Foreground
 */
#define GUAC_TERMINAL_WHITE_FOREGROUND 37

/**
 * Set Underscore on, default Foreground color
 */
#define GUAC_TERMINAL_DEF_FOREGROUND_UNDERSCORE_ON 38

/**
 * Set Underscore off, default Foreground color
 */
#define GUAC_TERMINAL_DEF_FOREGROUND_UNDERSCORE_OFF 39

/**
 * Set Bright Foreground Color - lower bound
 */
#define GUAC_TERMINAL_BRIGHT_FOREGROUND_LOW 90

/**
 * Set Bright Foreground Color - upper bound
 */
#define GUAC_TERMINAL_BRIGHT_FOREGROUND_HIGH 97

/**
 * Set Black Background
 */
#define GUAC_TERMINAL_BLACK_BACKGROUND 40

/**
 * Set White Background
 */
#define GUAC_TERMINAL_WHITE_BACKGROUND 47

/**
 * Set Background color
 * Next arguments are 5;n or 2;r;g;b
 */
#define GUAC_TERMINAL_SET_BACKGROUND 48

/**
 * Set Default Black Background color
 */
#define GUAC_TERMINAL_DEFAULT_BACKGROUND 49

/**
 * Set Bright Background Color - lower bound
 */
#define GUAC_TERMINAL_BRIGHT_BACKGROUND_LOW 100

/**
 * Set Bright Background Color - upper bound
 */
#define GUAC_TERMINAL_BRIGHT_BACKGROUND_HIGH 107

/**
 * RGB Colors
 */
#define GUAC_TERMINAL_MAX_COLORS 3

/**
 * RGB Color Max Value
 */
#define GUAC_TERMINAL_MAX_COLOR_RANGE 255

/**
 * DEC screen alignment test - fill screen with E's
 */
#define GUAC_TERMINAL_ALIGNMENT_TEST 8

#endif