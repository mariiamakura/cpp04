#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);

        ~Dog();

        void makeSound() const;
        const std::string &getType() const;
        void printDogIdeas() const;
        Brain *getBrain(void) const;

    private:
        std::string type;
        Brain *brain;

};