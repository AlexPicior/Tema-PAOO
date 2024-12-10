#include "../inc/FileHandler.hpp"
#include <iostream>

int main() {
    try {
        FileHandler writer("example.txt", std::ios::out);
        writer.write("Hello, World!\n");

        FileHandler reader = std::move(writer);
        std::cout << "Read from file: " << reader.readLine() << '\n';

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
