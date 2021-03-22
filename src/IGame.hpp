/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include "Scene.hpp"

namespace arcade {

    namespace lib {

        class IGame {
            public:
                virtual ~IGame() {}
                virtual void init(Scene &scene) = 0;
                virtual void update(Scene &scene, float dt) = 0;
                virtual void end(Scene &scene) = 0;

            protected:
            private:
        };

    }

}

#endif /* !IGAME_HPP_ */
