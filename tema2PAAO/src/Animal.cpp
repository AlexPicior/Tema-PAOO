#include "../inc/Animal.hpp"

Animal::Animal(const std::string& name, int age): name(name), age(age) 
{
    std::cout << "Animal created: " << name << ", age: " << age << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destroyed: " << name << ", age: " << age << std::endl;
}
