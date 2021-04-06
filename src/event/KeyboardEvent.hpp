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
        H_KEY,
        J_KEY,
        K_KEY,
        L_KEY,
        WQ_NO_QUIT
    };

    struct VimEvent: public IEvent {
        Key youCantQuit;
        enum { INSERT, REPLACE, NORMAL } action;
    };

}

}

#endif /* !KEYBOARD_HPP_ */
