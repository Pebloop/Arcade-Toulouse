/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include "ILibrary.hpp"
#include "event/KeyboardEvent.hpp"
#include "event/MouseEvent.hpp"

namespace arcade {

namespace lib {

    class IGame : public ILibrary {
    public:
        virtual ~IGame() = default;

        virtual void onKeyEvent(const event::KeyboardEvent& key) = 0;
        virtual void onMouseEvent(const event::MouseEvent& mouse) = 0;

    protected:
    private:
    };

}

}

#endif /* !IGAME_HPP_ */
