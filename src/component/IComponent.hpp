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

    /**
     * @brief Marker interface to denote a type to be used as a component
     */
    class IComponent {
    public:
        virtual ~IComponent() = default;
    };

}

}

#endif /* !ICOMPONENT_HPP_ */
