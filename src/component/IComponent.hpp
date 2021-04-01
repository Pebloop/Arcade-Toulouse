/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

#include <string>

namespace arcade {

namespace component {

    enum class ComponentType { SPRITE, TEXT, ASCII_SPRITE, SOUND, OTHER };

    class IComponent {
    public:
        IComponent() = default;
        ~IComponent() = default;

        // get component type
        virtual ComponentType getType() const = 0;

    protected:
    private:
    };

}

}

#endif /* !ICOMPONENT_HPP_ */
