#include "include/Brain.hpp"

Brain::Brain()  {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Brain idea";
    std::cout << "%Brain% constructor called" <<std::endl;
}

Brain::Brain(const Brain &other) {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i] + " (copy)";
    std::cout << "%Brain% copy constructor called" <<std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other)
    {
        delete[] this->ideas;
        this->ideas = new std::string[100];
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i] + " copy constr";
    }
    std::cout << "%Brain% operator= called" <<std::endl;
    return (*this);
}

Brain::~Brain() {
    delete [] this->ideas;
    std::cout << "%Brain% destructor called" <<std::endl;
}

const std::string *Brain::getIdeas() {
    return this->ideas;
}

