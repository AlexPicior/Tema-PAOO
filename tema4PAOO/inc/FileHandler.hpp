#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <stdexcept>

class FileHandler {
private:
    std::fstream file;

public:
    FileHandler(const std::string& filename, std::ios::openmode mode) {
        file.open(filename, mode);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + filename);
        }
        std::cout << "File " << filename << " opened successfully.\n";
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed.\n";
        }
    }

    void write(const std::string& data) {
        if (file.is_open()) {
            file << data;
            std::cout << "Data written to file.\n";
        } else {
            throw std::runtime_error("File is not open for writing.");
        }
    }

    std::string readLine() {
        if (file.is_open()) {
            std::string line;
            if (std::getline(file, line)) {
                return line;
            } else {
                throw std::runtime_error("Failed to read from file or end of file reached.");
            }
        } else {
            throw std::runtime_error("File is not open for reading.");
        }
    }

    FileHandler(const FileHandler&) = delete;

    FileHandler& operator=(const FileHandler&) = delete;

    FileHandler(FileHandler&& other) noexcept : file(std::move(other.file)) {
        std::cout << "FileHandler moved.\n";
    }

    FileHandler& operator=(FileHandler&& other) noexcept {
        if (this != &other) {
            if (file.is_open()) {
                file.close();
            }
            file = std::move(other.file);
            std::cout << "FileHandler moved via assignment.\n";
        }
        return *this;
    }
};

#endif 
