#ifndef STUDENT_HPP
#define STUDENT_HPP

#pragma once
#include <string>

class Student
{
private:
    std::string name;
    int age;
public:
    std::string getName();
    int getAge();
    void setName(std::string n);
    void setAge(int a);
};

#endif
