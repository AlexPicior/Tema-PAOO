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

    Student student2(student);
    std::cout << student2.getName() << " " << student2.getAge() << " " << student2.getNrCourses() << " " << student2.getCurrentCourses()[0] << "\n";

    Student student3 = std::move(student);
    std::cout << student3.getName() << " " << student3.getAge() << " " << student3.getNrCourses() << " " << student3.getCurrentCourses()[0] << "\n";
    return 0;
}