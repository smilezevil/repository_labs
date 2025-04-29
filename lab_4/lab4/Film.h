#ifndef FILM_H
#define FILM_H
#include "MediaItem.h"
#include <string>
#include <vector>
#include <iostream>

class Genre {
    std::string name;
public:
    Genre(const std::string& name = "Unknown") : name(name) {}
    std::string getName() const { return name; }
};

class ProductionCompany {
    std::string name;
public:
    ProductionCompany(const std::string& name = "Independent") : name(name) {}
    std::string getName() const { return name; }
};

class Person {
protected:
    std::string name;
public:
    Person(const std::string& name) : name(name) {}
    std::string getName() const { return name; }
};

class Actor : public Person {
public:
    Actor(const std::string& name) : Person(name) {}
};

class Director : public Person {
public:
    Director(const std::string& name) : Person(name) {}
};

class Film : public MediaItem {
protected:
    Genre genre;
    ProductionCompany company;
    std::vector<Actor> actors;
    Director director;
public:
    Film(const std::string& title, int year, const Genre& genre,
        const ProductionCompany& company, const std::vector<Actor>& actors,
        const Director& director);

    Film(const Film& other);
    Film(Film&& other) noexcept;
    Film& operator=(const Film& other);
    Film& operator=(Film&& other) noexcept;

    virtual void print() const override;
    virtual ~Film() = default;
};

class FeatureFilm : public Film {
    bool hasPostCredits;
public:
    FeatureFilm(const std::string& title, int year, const Genre& genre,
        const ProductionCompany& company, const std::vector<Actor>& actors,
        const Director& director, bool hasPostCredits);
    void print() const override;
};

class Documentary : public Film {
    std::string subject;
public:
    Documentary(const std::string& title, int year, const Genre& genre,
        const ProductionCompany& company, const std::vector<Actor>& actors,
        const Director& director, const std::string& subject);
    void print() const override;
};

#endif
