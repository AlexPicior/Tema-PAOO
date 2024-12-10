#include "../inc/FileHandler.hpp"
#include <iostream>

int main() {
    try {
        FileHandler writer("example.txt", std::ios::out);
        writer.write("Hello, World!\n");

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
