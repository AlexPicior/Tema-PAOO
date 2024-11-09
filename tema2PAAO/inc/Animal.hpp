#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
private:
    std::string name;
    int age;
public:
    Animal(const std::string& name, int age);
};

#endif 
