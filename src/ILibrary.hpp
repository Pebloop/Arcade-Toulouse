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

        class ILibrary {
            public:
                virtual ~ILibrary() {}
                virtual void init(IScene &scene) = 0;
                virtual void update(IScene &scene, float dt) = 0;
                virtual void end(IScene &scene) = 0;

                virtual bool quitRequested() const = 0;

            protected:
            private:
        };

    }

}

#endif /* !ILIBRARY_HPP_ */
