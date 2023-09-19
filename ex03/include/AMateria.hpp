#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    public:
        AMateria();
        AMateria(std::string const &type);

        virtual ~AMateria();

        AMateria(AMateria const &other);
/*        AMateria &operator=(AMateria const &other);*/

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    protected:
        const std::string _type;
};