#include "include/AAnimal.hpp"

AAnimal::AAnimal() {
    this->type = "AAnimal";
    std::cout << ":AAnimal: constructor called" <<std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    *this = other;
    std::cout << ":AAnimal: copy constructor called" <<std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << ":AAnimal: operator= called" <<std::endl;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << ":AAnimal: destructor called" <<std::endl;
}

void AAnimal::makeSound() const {
    std::cout << "-----AAnimal sounds-------" << std::endl;
}

const std::string &AAnimal::getType() const {
    return (this->type);
}