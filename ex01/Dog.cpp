#include "include/Dog.hpp"

Dog::Dog()  {
    this->type = "dog";
    this->brain = new Brain;
    std::cout << "%Dog% with a brain constructor called" <<std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    this->type = other.type;
    this->brain = new Brain(*(other.getBrain()));
    std::cout << "%Dog% with a brain copy constructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*(other.getBrain()));
    }
    std::cout << "%Dog% with a brain operator= called" <<std::endl;
    return (*this);
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "%Dog% with a brain destructor called" <<std::endl;
}

Brain *Dog::getBrain() const {
    return this->brain;
}

void Dog::makeSound() const {
    std::cout << "Bbbbbaaaaarrrkkkkkkkkkk" <<std::endl;
}

const std::string &Dog::getType() const {
    return (this->type);
}

void Dog::printDogIdeas() const {
    const std::string *ideas = this->brain->getIdeas();
    for (int i = 0; i < 100; i++)
        std::cout << ideas[i] << std::endl;
}
