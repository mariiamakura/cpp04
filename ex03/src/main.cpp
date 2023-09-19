#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Cure.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"



int main()
{
  //copy check
        // Create the original Character
        Character original("Alice");

        // Equip a Materia on the original Character
        AMateria* ice = new Ice();
        original.equip(ice);

        Character copy(original);

        // Check if the copy also has the Materia equipped
        AMateria* copyIce = copy.getInventoryElem(0);
        if (copyIce) {
            std::cout << "Copy has the same Materia: " << copyIce->getType() << std::endl;
        } else {
            std::cout << "Copy does not have the same Materia" << std::endl;
        }

        // Unequip the Materia from the original Character
        original.unequip(0);

        // Check if the copy still has the Materia equipped
        copyIce = copy.getInventoryElem(0);
        if (copyIce) {
            std::cout << "Copy still has the same Materia: " << copyIce->getType() << std::endl;
        } else {
            std::cout << "Copy no longer has the same Materia" << std::endl;
        }

        // Clean up memory
        delete ice;


//    IMateriaSource* src = new MateriaSource();
//    src->learnMateria(new Ice());
//    src->learnMateria(new Cure());
//    ICharacter* me = new Character("me");
//    AMateria* tmp;
//    tmp = src->createMateria("ice");
//    me->equip(tmp);
//    tmp = src->createMateria("cure");
//    me->equip(tmp);
//    ICharacter* bob = new Character("bob");
//    me->use(0, *bob);
//    me->use(1, *bob);
//    delete bob;
//    delete me;
//    delete src;
//    return 0;

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