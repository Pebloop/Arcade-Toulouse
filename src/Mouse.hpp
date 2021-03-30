/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Mouse
*/

#ifndef MOUSE_HPP_
#define MOUSE_HPP_

struct MouseEvent {
    int x;
    int y;
    enum {
        MOUSE_PRIMARY,
        MOUSE_SECONDARY,
        MOUSE_AUXILIARY,
    } button;
};

#endif /* !MOUSE_HPP_ */
