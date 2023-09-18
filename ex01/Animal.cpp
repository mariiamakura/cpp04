#include "include/Animal.hpp"

Animal::Animal() {
    this->type = "animal";
    std::cout << ":Animal: constructor called" <<std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
    std::cout << ":Animal: copy constructor called" <<std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << ":Animal: operator= called" <<std::endl;
    return (*this);
}

Animal::~Animal() {
    std::cout << ":Animal: destructor called" <<std::endl;
}

void Animal::makeSound() const {
    std::cout << "-----animal sounds-------" << std::endl;
}

const std::string &Animal::getType() const {
    return (this->type);
}