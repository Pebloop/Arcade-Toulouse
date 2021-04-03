/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Keyboard
*/

#ifndef KEYBOARD_HPP_
#define KEYBOARD_HPP_

#include "IEvent.hpp"

namespace arcade {

namespace event {

    enum class Key {
        KEY_ESCAPE = 118,
        KEY_BACKSPACE = 102,
        KEY_RIGHT = 244,
        KEY_LEFT = 235,
        KEY_UP = 245,
        KEY_DOWN = 242,
        KEY_SHIFT_LEFT = 18,
        KEY_SHIFT_RIGHT = 89,
        KEY_CTRL_LEFT = 20,
        KEY_CTRL_RIGHT = 148,
        KEY_ALT_LEFT = 17,
        KEY_ALT_RIGHT = 145,
        KEY_TAB = 13,
        KEY_PAGE_UP = 253,
        KEY_PAGE_DOWN = 250,
        KEY_DELETE = 241,
        KEY_INSERT = 240,
        KEY_END = 233,
        KEY_SPACE = 32,
        KEY_F1 = 5,
        KEY_F2 = 6,
        KEY_F3 = 4,
        KEY_F4 = 12,
        KEY_F5 = 3,
        KEY_F6 = 11,
        KEY_F7 = 131,
        KEY_F8 = 10,
        KEY_F9 = 1,
        KEY_F10 = 9,
        KEY_F11 = 120,
        KEY_F12 = 7,
        KEY_A = 28,
        KEY_B = 50,
        KEY_C = 33,
        KEY_D = 35,
        KEY_E = 36,
        KEY_F = 43,
        KEY_G = 52,
        KEY_H = 51,
        KEY_I = 67,
        KEY_J = 59,
        KEY_K = 66,
        KEY_L = 75,
        KEY_M = 58,
        KEY_N = 49,
        KEY_O = 68,
        KEY_P = 77,
        KEY_Q = 21,
        KEY_R = 45,
        KEY_S = 27,
        KEY_T = 44,
        KEY_U = 60,
        KEY_V = 42,
        KEY_W = 29,
        KEY_X = 34,
        KEY_Y = 53,
        KEY_Z = 26,
        KEY_1 = 22,
        KEY_2 = 30,
        KEY_3 = 38,
        KEY_4 = 37,
        KEY_5 = 46,
        KEY_6 = 54,
        KEY_7 = 61,
        KEY_8 = 62,
        KEY_9 = 70,
        KEY_0 = 69,
    };

    struct KeyboardEvent : public IEvent {
        Key key;
        enum { PRESSED, DOWN, RELEASED } action;
    };

}

}

#endif /* !KEYBOARD_HPP_ */
