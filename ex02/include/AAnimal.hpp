#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const AAnimal &other);

        virtual ~AAnimal() = 0;

        AAnimal &operator=(const AAnimal &other);

        virtual void makeSound() const = 0;
        virtual const std::string &getType() const;

    protected:
        std::string type;

};

#endif