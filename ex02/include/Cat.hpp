#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);

        ~Cat();

        void makeSound() const;
        const std::string &getType() const;
        void printCatIdeas() const;
        Brain *getBrain(void) const;

    private:
        std::string type;
        Brain *brain;

};