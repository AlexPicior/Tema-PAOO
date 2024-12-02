#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data;
    int value;

public:
    MyClass(const char* initData = "", int initValue = 0)
        : value(initValue) {
        data = new char[strlen(initData) + 1];
        strcpy(data, initData);
        std::cout << "Constructor apelat.\n";
    }

    MyClass& operator=(const MyClass& other) {
        std::cout << "Operator de asignare apelat.\n";

        if (this == &other) {
            std::cout << "Asignare la sine.\n";
            return *this;
        }

        return *this;
    }

    void display() const {
        std::cout << "Data: " << data << ", Value: " << value << "\n";
    }
};

#endif 
