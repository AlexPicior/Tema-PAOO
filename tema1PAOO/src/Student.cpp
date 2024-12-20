#include "../inc/Student.hpp"
#include <iostream>

Student::Student(std::string n, int a, int nc) : name(n), age(a), current_courses(new std::string[nc]), nr_courses(nc) {
    std::cout<<"Obj created\n";
}

Student::~Student() {
    delete[] current_courses;
    std::cout<<"Obj destroyed\n";
}

Student::Student(Student& other) : name(other.name), age(other.age), nr_courses(other.nr_courses), current_courses(new std::string[other.nr_courses]) {
    for (int i = 0; i < other.nr_courses; i++)
    {
        current_courses[i] = other.current_courses[i];
    }
    std::cout<<"Obj copied\n";
}

Student::Student(Student&& other) : name(other.name), age(other.age), nr_courses(other.nr_courses), current_courses(other.current_courses) {
    other.current_courses = nullptr;
    std::cout<<"Obj moved\n";
}

std::string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

std::string* Student::getCurrentCourses() {
    return current_courses;
}

int Student::getNrCourses() {
    return nr_courses;
}

void Student::setName(std::string n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

void Student::setCurrenrCourses(std::string* cc) {
    for (int i = 0; i < nr_courses; i++)
    {
        current_courses[i] = cc[i];
    }
    
}

void Student::setNrCourses(int nc) {
    nr_courses = nc;
}
