#include "Genre.h"
#include <iostream>

Genre::Genre(const std::string& name) : name(name) {}
Genre::~Genre() {
    std::cout << "Destroying Genre: " << name << std::endl;
}
void Genre::describe() const {
    std::cout << "Genre: " << name << std::endl;
}

Drama::Drama() : Genre("Drama") {}
void Drama::describe() const {
    std::cout << "Genre: Drama - Emotional and narrative driven." << std::endl;
}

Comedy::Comedy() : Genre("Comedy") {}
void Comedy::describe() const {
    std::cout << "Genre: Comedy - Light-hearted and humorous." << std::endl;
}