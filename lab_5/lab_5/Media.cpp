#include "Media.h"

void Media::display() const {
    std::cout << "Title: " << title << ", Year: " << year << std::endl;
}

void Media::describe() const {
    std::cout << "Media description: " << title << ", Year: " << year << std::endl;
}
