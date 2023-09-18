#include "include/Cat.hpp"
#include "include//Dog.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

int main() {

//    Brain brain;
//    Brain brain2(brain);
//    Brain brain3;
//
//    brain3 = brain;
//
//    const std::string *arr_ideas;
//
//    arr_ideas = brain3.getIdeas();
//
//    for (int i = 0; i < 100; i++)
//        std::cout << arr_ideas[i] << std::endl;

//    const Animal *cat = new Cat();
//    const Animal *dog = new Dog();
//
//    const Cat truecat;
//    Cat cat_copy(truecat);
//    Cat last_cat;
//
//    last_cat = cat_copy;
//
//    std::cout << dog->getType() << " " << std::endl;
//    std::cout << cat->getType() << " " << std::endl;
//    last_cat.printCatIdeas();
//
//
//    delete cat;
//    delete dog;

    const Animal *animals[8];
    for (int i = 0; i < 4; i++)
        animals[i] = new Dog();
    for (int i = 4; i < 8; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 8; i++)
        std::cout << animals[i]->getType() << std::endl;

    for (int i = 0; i < 8; i++)
        delete animals[i];

    return 0;
}

