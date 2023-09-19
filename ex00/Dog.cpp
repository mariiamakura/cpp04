#include "include/Dog.hpp"

Dog::Dog()  {
    this->type = "dog";
    std::cout << "*Dog* constructor called" <<std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    *this = other;
    std::cout << "*Dog* copy constructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "*Dog* operator= called" <<std::endl;
    return (*this);
}

Dog::~Dog() {
    std::cout << "*Dog* destructor called" <<std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bbbbbaaaarkkkkkk" <<std::endl;
}

const std::string &Dog::getType() const {
    return (this->type);
}