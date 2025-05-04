#include "Film.h"

void Film::display() const {
    std::cout << "Film: " << title << " (" << year << ")" << std::endl;
}

void Film::describe() const {
    std::cout << "This is a film titled '" << title << "' from " << year << "." << std::endl;
}
