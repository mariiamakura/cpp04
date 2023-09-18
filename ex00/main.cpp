#include "include/Cat.hpp"
#include "include//Dog.hpp"
#include "include/WrongCat.hpp"

int main() {

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    const WrongAnimal *wrongCat = new WrongCat();
    const WrongAnimal *wrongAnimal = new WrongAnimal();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongCat->getWrongAnimal() << " " << std::endl;

    dog->makeSound(); //will output the cat sound!
    cat->makeSound();
    animal->makeSound();

    wrongCat->makeSound();
    wrongAnimal->makeSound();


    return 0;
}

