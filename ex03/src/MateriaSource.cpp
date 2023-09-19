#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
    std::cout << "^MateriaSource^  is created" <<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = (other._inventory[i])->clone();
    }
    std::cout << "^MateriaSource^ is copied" <<std::endl;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (other._inventory[i])
            this->_inventory[i] = (other._inventory[i])->clone();
    }
    std::cout << "^MateriaSource^ is copied=" <<std::endl;
    return (*this);
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete _inventory[i];
    }
    std::cout << "^MateriaSource^ is deleted" <<std::endl;
}

void MateriaSource::learnMateria(AMateria *materia) {
    int i = 0;
    std::cout << materia->getType() << std::endl;
    while (i < 4 && this->_inventory[i] != 0)
        i++;
    if (i >= 4) {
        std::cout << "Can't learn more than 4 Materias" << std::endl;
        return ;
    }
    this->_inventory[i] = materia;
    std::cout << "Materia " << materia->getType() << " learned" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type){
            std::cout << "Materia source creates " << type << std::endl;
            return (this->_inventory[i])->clone();
        }
    }
    std::cout << "Materia source cannot create " << type << ". Not learned." << std::endl;
    return NULL;
}