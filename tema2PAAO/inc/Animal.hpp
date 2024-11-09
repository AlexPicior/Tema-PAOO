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

    // Siletly called functions: default constructor, copy constructor, copy assignment operator and destructor

    Animal(const Animal&) = delete;

    Animal& operator=(const Animal&) = delete;

    ~Animal();

};

#endif 
