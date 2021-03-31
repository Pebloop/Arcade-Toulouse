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

    class IGraphic : public ILibrary {
    public:
        virtual ~IGraphic()
        {
        }

        virtual bool quitRequested() const = 0;

    protected:
    private:
    };

}

}

#endif /* !IGRAPHIC_HPP_ */
