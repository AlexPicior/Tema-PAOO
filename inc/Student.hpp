#ifndef STUDENT_HPP
#define STUDENT_HPP

#pragma once
#include <string>

class Student
{
private:
    std::string name;
    int age;
    std::string* current_courses;
    int nr_courses;
public:
    Student(std::string n, int a, int nc);
    ~Student();
    Student(Student& other);
    std::string getName();
    int getAge();
    std::string* getCurrentCourses();
    int getNrCourses();
    void setName(std::string n);
    void setAge(int a);
    void setCurrenrCourses(std::string* c);
    void setNrCourses(int nc);
};

#endif
