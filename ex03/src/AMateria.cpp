#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("default") {
    std::cout << ":AMateria: is created" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type) {
    std::cout << ":AMateria: with type is created" << std::endl;
}

AMateria::~AMateria() {
    std::cout << ":AMateria: is deleted" << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type) {
    std::cout << ":AMateria: is copied" << std::endl;
}

/*
AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other)
        this->_type = other._type;
    std::cout << ":AMateria: is copied=" << std::endl;
    return (*this);
}
*/

std::string const &AMateria::getType() const {
    return (this->_type);
}

void AMateria::use(ICharacter &target) {
    std::cout << ":AMateria: is used on ICharacter " << target.getName() << std::endl;
}