#pragma once
#include <string>
#include <vector>

class Film; // Forward declaration

class ProductionCompany {
private:
    std::string name;
    std::vector<Film*> films;
public:
    ProductionCompany(const std::string& name);
    ~ProductionCompany();

    void addFilm(Film* film);
    void showFilms() const;
    const std::string& getName() const;
};