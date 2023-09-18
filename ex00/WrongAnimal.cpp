#include "include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << ":WrongAnimal: constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
    std::cout << ":WrongAnimal: copy constructor called" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << ":WrongAnimal: operator= called" <<std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << ":WrongAnimal: destructor called" <<std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "XXX -----WrongAnimal sounds------- XXX" << std::endl;
}

const std::string &WrongAnimal::getWrongAnimal() const {
    return (this->type);
}