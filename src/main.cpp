#include "Student.hpp"
#include <iostream>

int main() {
    Student student("Alex", 22, 2);
    std::cout << student.getName() << " " << student.getAge() << " " << student.getNrCourses() << "\n";

    student.setName("Alex Picior");
    student.setAge(23);
    student.setNrCourses(1);
    std::string* courses = new std::string[1];
    courses[0] = "PAOO";
    student.setCurrenrCourses(courses);
    std::cout << student.getName() << " " << student.getAge() << " " << student.getNrCourses() << " " << student.getCurrentCourses()[0] << "\n";

    
    return 0;
}