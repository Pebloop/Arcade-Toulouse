/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** ISystem
*/

#ifndef ILIBRARY_HPP_
#define ILIBRARY_HPP_

#include "Scene.hpp"

namespace arcade {

    namespace lib {

        class ILibrary {
            public:
                virtual ~ILibrary() {}
                virtual void init(Scene &scene) = 0;
                virtual void update(Scene &scene, float dt) = 0;
                virtual void end(Scene &scene) = 0;

            protected:
            private:
        };

    }

}

#endif /* !ILIBRARY_HPP_ */
