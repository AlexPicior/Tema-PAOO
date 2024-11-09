#include "../inc/Animal.hpp"

int main() {
    Animal animal("Dog", 5);
    // Animal animalCopy = animal; -- throws error because copy constructor is restricted
    // Animal anotherAnimal("Cat", 3);
    // anotherAnimal = animal; -- throws error because copy operators is restricted

    return 0;
}
