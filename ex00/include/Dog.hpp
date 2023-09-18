#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);

        ~Dog();

        void makeSound() const;
        const std::string &getType() const;

    private:
        std::string type;
};