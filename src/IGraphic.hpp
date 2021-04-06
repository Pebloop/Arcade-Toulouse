/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IGraphic
*/

#ifndef IGRAPHIC_HPP_
#define IGRAPHIC_HPP_

#include "ILibrary.hpp"

namespace arcade {

namespace lib {

    /**
     * @brief An `IGraphic` represents a graphical library capable of displaying
     * a scene and pushing events to it
     */
    class IGraphic : public ILibrary {
    public:
        virtual ~IGraphic() = default;

        /**
         * @brief Check if the user has requested to quit the game
         */
        virtual bool quitRequested() const = 0;
    };

}

}

#endif /* !IGRAPHIC_HPP_ */
