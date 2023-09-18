#include "include/Cat.hpp"

Cat::Cat()  {
    this->type = "cat";
    std::cout << "%Cat% constructor called" <<std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    *this = other;
    std::cout << "%Cat% copy constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "%Cat% operator= called" <<std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "%Cat% destructor called" <<std::endl;
}

void Cat::makeSound() const {
    std::cout << "Mmmmeeeeoooouuuuuwwwww" <<std::endl;
}

const std::string &Cat::getType() const {
    return (this->type);
}