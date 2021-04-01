/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include "ILibrary.hpp"
#include "Mouse.hpp"
#include "keyboard.hpp"

namespace arcade {

namespace lib {

    class IGame : public ILibrary {
    public:
        virtual ~IGame() = default;

        virtual void onKeyDown(const Key& key) = 0;
        virtual void onKeyPressed(const Key& key) = 0;
        virtual void onKeyReleased(const Key& key) = 0;
        virtual void onMouseDown(const MouseEvent& mouse) = 0;
        virtual void onMousePressed(const MouseEvent& mouse) = 0;
        virtual void onMouseReleased(const MouseEvent& mouse) = 0;

    protected:
    private:
    };

}

}

#endif /* !IGAME_HPP_ */
