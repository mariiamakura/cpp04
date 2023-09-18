#include "include/WrongCat.hpp"

WrongCat::WrongCat()  {
    this->type = "WrongCat";
    std::cout << "%WrongCat% constructor called" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    *this = other;
    std::cout << "%WrongCat% copy constructor called" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "%WrongCat% operator= called" <<std::endl;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "%WrongCat% destructor called" <<std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "XXX Wrong mmmeeeeoooouuuuuwwwww XXX" <<std::endl;
}

const std::string &WrongCat::getWrongCat() const {
    return (this->type);
}