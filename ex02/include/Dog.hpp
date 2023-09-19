#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);

        ~Dog();

        void makeSound() const;
        const std::string &getType() const;

    private:
        std::string type;
        Brain *brain;
};