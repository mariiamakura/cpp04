#include "include/Cat.hpp"

Cat::Cat()  {
    this->type = "cat";
    this->brain = new Brain;
    std::cout << "%Cat% with a brain constructor called" <<std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    this->type = other.type;
    this->brain = new Brain(*(other.getBrain()));
    std::cout << "%Cat% with a brain copy constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*(other.getBrain()));
    }
    std::cout << "%Cat% with a brain operator= called" <<std::endl;
    return (*this);
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "%Cat% with a brain destructor called" <<std::endl;
}

Brain *Cat::getBrain() const {
    return this->brain;
}

void Cat::makeSound() const {
    std::cout << "Mmmmeeeeoooouuuuuwwwww" <<std::endl;
}

const std::string &Cat::getType() const {
    return (this->type);
}

void Cat::printCatIdeas() const {
    const std::string *ideas = this->brain->getIdeas();
    for (int i = 0; i < 100; i++)
        std::cout << ideas[i] << std::endl;
}

