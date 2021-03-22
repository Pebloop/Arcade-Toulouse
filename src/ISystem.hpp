/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** ISystem
*/

#ifndef ISYSTEM_HPP_
#define ISYSTEM_HPP_

#include "Scene.hpp"

namespace arcade {

    namespace lib {

        class ISystem {
            public:
                virtual ~ISystem() {}
                virtual void init(Scene &scene) = 0;
                virtual void update(Scene &scene, float dt) = 0;
                virtual void end(Scene &scene) = 0;

            protected:
            private:
        };

    }

}

#endif /* !ISYSTEM_HPP_ */
