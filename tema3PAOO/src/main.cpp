#include <iostream>
#include "../inc/MyClass.hpp"

int main() {
    MyClass obj1("Hello", 42);
    MyClass obj2("World", 99);

    std::cout << "Stare inițială:\n";
    obj1.display();
    obj2.display();

    obj1 = obj1;
    std::cout << "\nDupă asignare la sine (obj1 = obj1):\n";
    obj1.display();

    obj1 = obj2;
    std::cout << "\nDupă asignare (obj1 = obj2):\n";
    obj1.display();
    obj2.display();

    return 0;
}
