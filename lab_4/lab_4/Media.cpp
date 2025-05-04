#include "Media.h"
#include <iostream>

Media::Media(const std::string& title, int year)
    : title(title), year(year) {
}

Media::~Media() {
    std::cout << "Destroying Media: " << title << std::endl;
}

void Media::display() const {
    std::cout << "Title: " << title << ", Year: " << year << std::endl;
}