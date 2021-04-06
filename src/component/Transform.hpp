/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Transform
*/

#ifndef TRANSFORM_HPP_
#define TRANSFORM_HPP_

#include "../Vector3.hpp"
#include "IComponent.hpp"

namespace arcade {

namespace component {

    /**
     * @brief Component representing a 3D affine transformation
     *
     * The order in which the  transformations should be applied is translation
     * THEN rotation THEN scale.
     */
    struct Transform : public IComponent {
        math::Vector3 position;
        math::Vector3 rotation; // facultatif
        math::Vector3 scale; // facultatif
    };

}

}

#endif /* !TRANSFORM_HPP_ */
