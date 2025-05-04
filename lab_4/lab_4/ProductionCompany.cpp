#include "ProductionCompany.h"
#include "Film.h"
#include <iostream>

ProductionCompany::ProductionCompany(const std::string& name) : name(name) {}
ProductionCompany::~ProductionCompany() {
    for (Film* film : films) delete film;
    std::cout << "Destroying Production Company: " << name << std::endl;
}

void ProductionCompany::addFilm(Film* film) {
    films.push_back(film);
}

void ProductionCompany::showFilms() const {
    std::cout << "Films by " << name << ":" << std::endl;
    for (const Film* film : films) film->display();
}

const std::string& ProductionCompany::getName() const {
    return name;
}