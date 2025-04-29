#include "Film.h"

Film::Film(const std::string& title, int year, const Genre& genre,
    const ProductionCompany& company, const std::vector<Actor>& actors,
    const Director& director)
    : MediaItem(title, year), genre(genre), company(company), actors(actors), director(director) {
}

Film::Film(const Film& other)
    : MediaItem(other.title, other.year), genre(other.genre), company(other.company),
    actors(other.actors), director(other.director) {
}

Film::Film(Film&& other) noexcept
    : MediaItem(std::move(other.title), other.year), genre(std::move(other.genre)),
    company(std::move(other.company)), actors(std::move(other.actors)),
    director(std::move(other.director)) {
}

Film& Film::operator=(const Film& other) {
    if (this != &other) {
        title = other.title;
        year = other.year;
        genre = other.genre;
        company = other.company;
        actors = other.actors;
        director = other.director;
    }
    return *this;
}

Film& Film::operator=(Film&& other) noexcept {
    if (this != &other) {
        title = std::move(other.title);
        year = other.year;
        genre = std::move(other.genre);
        company = std::move(other.company);
        actors = std::move(other.actors);
        director = std::move(other.director);
    }
    return *this;
}

void Film::print() const {
    std::cout << "Film: " << title << " (" << year << ")\nGenre: " << genre.getName()
        << "\nCompany: " << company.getName() << "\nDirector: " << director.getName() << "\nActors: ";
    for (const auto& actor : actors) std::cout << actor.getName() << ", ";
    std::cout << "\n";
}

FeatureFilm::FeatureFilm(const std::string& title, int year, const Genre& genre,
    const ProductionCompany& company, const std::vector<Actor>& actors,
    const Director& director, bool hasPostCredits)
    : Film(title, year, genre, company, actors, director), hasPostCredits(hasPostCredits) {
}

void FeatureFilm::print() const {
    Film::print();
    std::cout << "Post-credits scene: " << (hasPostCredits ? "Yes" : "No") << "\n";
}

Documentary::Documentary(const std::string& title, int year, const Genre& genre,
    const ProductionCompany& company, const std::vector<Actor>& actors,
    const Director& director, const std::string& subject)
    : Film(title, year, genre, company, actors, director), subject(subject) {
}

void Documentary::print() const {
    Film::print();
    std::cout << "Subject: " << subject << "\n";
}