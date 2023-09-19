#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    public:
        Character(std::string name);
        Character(Character const &other);

        ~Character();

        Character &operator=(Character const &other);

        std::string const &getName() const;
        void equip(AMateria *materia);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        AMateria *getInventoryElem(int idx);

    private:
        AMateria *_inventory[4];
        const std::string _name;
};