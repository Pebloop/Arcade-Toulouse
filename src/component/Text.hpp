/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Text
*/

#ifndef TEXT_HPP_
#define TEXT_HPP_

#include "IComponent.hpp"
#include <string>

namespace arcade {

namespace component {

    /**
     * @brief Component representing a text
     */
    struct Text : public IComponent {
        std::string text;
    };

}

}

#endif /* !TEXT_HPP_ */
