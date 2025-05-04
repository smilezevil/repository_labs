#include "Film.h"
#include <iostream>

Film::Film(const std::string& title, int year, Genre* genre, ProductionCompany* company)
    : Media(title, year), genre(genre), company(company) {
}

Film::~Film() {
    std::cout << "Destroying Film: " << title << std::endl;
}

Film::Film(const Film& other)
    : Media(other.title, other.year), genre(other.genre), company(other.company) {
    std::cout << "Copy constructor called for Film: " << title << std::endl;
}

Film::Film(Film&& other) noexcept
    : Media(std::move(other.title), other.year), genre(other.genre), company(other.company) {
    other.genre = nullptr;
    other.company = nullptr;
    std::cout << "Move constructor called for Film: " << title << std::endl;
}

Film& Film::operator=(const Film& other) {
    if (this != &other) {
        title = other.title;
        year = other.year;
        genre = other.genre;
        company = other.company;
    }
    std::cout << "Copy assignment operator called for Film: " << title << std::endl;
    return *this;
}

Film& Film::operator=(Film&& other) noexcept {
    if (this != &other) {
        title = std::move(other.title);
        year = other.year;
        genre = other.genre;
        company = other.company;

        other.genre = nullptr;
        other.company = nullptr;
    }
    std::cout << "Move assignment operator called for Film: " << title << std::endl;
    return *this;
}

void Film::display() const {
    Media::display();
    if (genre) genre->describe();
    if (company) std::cout << "Production Company: " << company->getName() << std::endl;
}