#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {
    this->_type = "ice";
    std::cout << "*Ice* is created" << std::endl;
}

Ice::~Ice() {
    std::cout << "*Ice* is deleted" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
    this->_type = "ice";
    std::cout << "*Ice* is copied" << std::endl;
}

//Ice &Ice::operator=(const Ice &other) {
//    std::cout << "Assigning an ice to another ice doesn't make sense." << std::endl;
//    return (*this);
//}

std::string const &Ice::getType() const {
    return (this->_type);
}

Ice *Ice::clone() const {
    Ice *one = new Ice;
    return (one);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}