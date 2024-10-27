#include "Student.hpp"

Student::Student(std::string n, int a) : name(n), age(a) {}

Student::~Student() {}

std::string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

void Student::setName(std::string n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}
