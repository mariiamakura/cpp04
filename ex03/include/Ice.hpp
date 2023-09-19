#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria {
public:
    Ice();
    Ice(Ice const &other);

    ~Ice();

//    Ice &operator=(Ice const &other);

    std::string const &getType() const;
    Ice *clone() const;
    void use(ICharacter &target);

private:
    std::string _type;
};
