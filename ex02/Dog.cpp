#include "include/Dog.hpp"

Dog::Dog()  {
    this->type = "dog";
    this->brain = new Brain;
    std::cout << "*Dog* with a brain constructor called" <<std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    *this = other;
    std::cout << "*Dog* with a brain copy constructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "*Dog* with a brain operator= called" <<std::endl;
    return (*this);
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "*Dog* with a brain destructor called" <<std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bbbbbaaaarkkkkkk" <<std::endl;
}

const std::string &Dog::getType() const {
    return (this->type);
}