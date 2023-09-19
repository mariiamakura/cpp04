#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const &other);

        ~Cure();

        Cure &operator=(Cure const &other);

        std::string const &getType() const;
        Cure *clone() const;
        void use(ICharacter &target);

    private:
        std::string _type;
};
