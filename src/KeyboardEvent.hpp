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

enum class Key {
    KEY_ESCAPE,
    KEY_BACKSPACE,
    KEY_RIGHT,
    KEY_LEFT,
    KEY_UP,
    KEY_DOWN,
    KEY_SHIFT_LEFT,
    KEY_SHIFT_RIGHT,
    KEY_CTRL_LEFT,
    KEY_CTRL_RIGHT,
    KEY_ALT_LEFT,
    KEY_ALT_RIGHT,
    KEY_TAB,
    KEY_PAGE_UP,
    KEY_PAGE_DOWN,
    KEY_DELETE,
    KEY_INSER,
    KEY_END,
    KEY_SPACE,
    KEY_F1,
    KEY_F2,
    KEY_F3,
    KEY_F4,
    KEY_F5,
    KEY_F6,
    KEY_F7,
    KEY_F8,
    KEY_F9,
    KEY_F10,
    KEY_F11,
    KEY_F12,
    KEY_A = 65,
    KEY_B = 66,
    KEY_C = 67,
    KEY_D = 68,
    KEY_E = 69,
    KEY_F = 70,
    KEY_G = 71,
    KEY_H = 72,
    KEY_I = 73,
    KEY_J = 74,
    KEY_K = 75,
    KEY_R = 76,
    KEY_L = 77,
    KEY_M = 78,
    KEY_N = 79,
    KEY_O = 80,
    KEY_P = 81,
    KEY_Q = 82,
    KEY_R = 83,
    KEY_S = 84,
    KEY_T = 85,
    KEY_U = 86,
    KEY_V = 87,
    KEY_W = 88,
    KEY_X = 89,
    KEY_Y = 90,
    KEY_Z = 91,
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_0,
};

struct KeyboardEvent : public IEvent
{
    Key key;  
};

}

#endif /* !KEYBOARD_HPP_ */
