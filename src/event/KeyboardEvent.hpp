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
        KEY_A = 'A',
        KEY_B = 'B',
        KEY_C = 'C',
        KEY_D = 'D',
        KEY_E = 'E',
        KEY_F = 'F',
        KEY_G = 'G',
        KEY_H = 'H',
        KEY_I = 'I',
        KEY_J = 'J',
        KEY_K = 'K',
        KEY_L = 'L',
        KEY_M = 'M',
        KEY_N = 'N',
        KEY_O = 'O',
        KEY_P = 'P',
        KEY_Q = 'Q',
        KEY_R = 'R',
        KEY_S = 'S',
        KEY_T = 'T',
        KEY_U = 'U',
        KEY_V = 'V',
        KEY_W = 'W',
        KEY_X = 'X',
        KEY_Y = 'Y',
        KEY_Z = 'Z',
        KEY_1 = '1',
        KEY_2 = '2',
        KEY_3 = '3',
        KEY_4 = '4',
        KEY_5 = '5',
        KEY_6 = '6',
        KEY_7 = '7',
        KEY_8 = '8',
        KEY_9 = '9',
        KEY_0 = '0',
    };

    struct KeyboardEvent : public IEvent {
        Key key;
        enum { PRESSED, DOWN, RELEASED } action;
    };

}

}

#endif /* !KEYBOARD_HPP_ */
