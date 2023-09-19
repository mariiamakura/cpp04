#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);

        ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &other);
        void learnMateria(AMateria *materia);
        AMateria *createMateria(std::string const &type);

    private:
        AMateria *_inventory[4];
};