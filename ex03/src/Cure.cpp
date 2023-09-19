#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {
    this->_type = "cure";
    std::cout << "+Cure+ is created" << std::endl;
}

Cure::~Cure() {
    std::cout << "+Cure+ is deleted" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
    *this = other;
    std::cout << "+Cure+ is copied" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other)
        this->_type = other.getType();
    std::cout << "+Cure+ is copied=" << std::endl;
    return (*this);
}

std::string const &Cure::getType() const {
    return (this->_type);
}

Cure *Cure::clone() const {
    Cure *one = new Cure;
    return (one);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds  *" << std::endl;
}