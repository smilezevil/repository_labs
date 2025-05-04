#pragma once
#include "Media.h"
#include "Genre.h"
#include "ProductionCompany.h"

class Film : public Media {
private:
    Genre* genre;
    ProductionCompany* company;
public:
    Film(const std::string& title, int year, Genre* genre, ProductionCompany* company);
    ~Film();

    Film(const Film& other);
    Film(Film&& other) noexcept;
    Film& operator=(const Film& other);
    Film& operator=(Film&& other) noexcept;

    void display() const override;
};