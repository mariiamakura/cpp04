#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Cure.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"



int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;

//    Ice ice;
//    std::cout << ice.getType() << std::endl;

//    IMateriaSource* src = new MateriaSource();
//    AMateria* tmp;
//    src->learnMateria(new Ice());
//    tmp = src->createMateria("ice");
//
//    ICharacter* me = new Character("me");
//    me->equip(tmp);
//    std::cout << std::endl;
}