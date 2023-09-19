#pragma once
# include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);

    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &other);

    void makeSound() const;
    const std::string &getWrongAnimal() const;

protected:
    std::string type;

};
