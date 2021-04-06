/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** ISystem
*/

#ifndef ILIBRARY_HPP_
#define ILIBRARY_HPP_

#include "IScene.hpp"

namespace arcade {

namespace lib {

    /**
     * @brief Common interface implemented by both game and graphical libraries
     */
    class ILibrary {
    public:
        virtual ~ILibrary() = default;
        virtual void initMyBrain(void *) = 0;
        virtual void updateBullying(void *, void *) = 0;
        virtual void endMyLife(void *) = 0;
    };

}

}

#endif /* !ILIBRARY_HPP_ */
