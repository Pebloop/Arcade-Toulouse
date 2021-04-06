/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Mouse
*/

#ifndef MOUSE_HPP_
#define MOUSE_HPP_

#include "IEvent.hpp"

namespace arcade {

namespace event {

    /**
     * @brief A mouse related event
     */
    struct MouseEvent : public IEvent {
        int x;
        int y;
        enum {
            MOUSE_PRIMARY,
            MOUSE_SECONDARY,
            MOUSE_AUXILIARY,
        } button;
        enum { PRESSED, DOWN, RELEASED } action;
    };

}

}

#endif /* !MOUSE_HPP_ */
