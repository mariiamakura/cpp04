#include "../include/Character.hpp"

Character::Character(std::string name) : _name(name) {
    //this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    std::cout << "&Character& " << name << " is created" <<std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << "&Character& " << this->_name << " is deleted" <<std::endl;
}

Character::Character(const Character &other) : _name(other.getName()) {
    for (int i = 0; i < 4; i++)
    {
        if ((other._inventory)[i])
        {
            (this->_inventory)[i] = (other._inventory[i])->clone();
        }
        else
            this->_inventory[i] = NULL;
    }
    std::cout << "&Character& " << this->_name << " is copied" <<std::endl;
}

Character &Character::operator=(const Character &other) {
    //can't copy name coz this-<_name is const
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (other._inventory[i])
            this->_inventory[i] = (other._inventory[i])->clone();
    }
    std::cout << "&Character& " << this->_name << " is copied=" <<std::endl;
    return (*this);
}


std::string const &Character::getName() const {
    return(this->_name);
}

void Character::equip(AMateria *materia) {
    int i = 0;
    if (!materia) {
        std::cout << "&Character& there is nothing to equip " << this->_name << std::endl;
        return ;
    }
    while (this->_inventory[i] != NULL && i < 4)
        i++;
    if (i >= 4) {
        std::cout << "&Character& there is no more space to equip " << this->_name << std::endl;
        return ;
    }
    this->_inventory[i] = materia;
    std::cout << "&Character& " << this->_name << "is equipped with " << materia->getType() << std::endl;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4)
        std::cout << "&Character& " << this->_name << " wrong idx. Range (0:3)" << std::endl;
    else if (!(this->_inventory[idx]))
        std::cout << "&Character& " << this->_name << " has not been equipped at slot " << idx << std::endl;
    else {
        AMateria *ptr = this->_inventory[idx];
        std::cout << "&Character& " << this->_name << " is unequipped by " << ptr->getType() << std::endl;
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx >= 4 || !(this->_inventory[idx])) {
        std::cout << "&Character& " << this->_name << " nothing is found at slot " << idx << std::endl;
        return ;
    }
    (this->_inventory[idx])->use(target);
}

AMateria *Character::getInventoryElem(int idx) {
    return (this->_inventory[idx]);
}