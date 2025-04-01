#include "Film.h"

int Film::filmCount = 0;

Film::Film() : name(""), duration(90), rating(0.0) { ++filmCount; }

Film::Film(const std::string& name, int duration, double rating)
    : name(name), duration(duration), rating(rating) {
    ++filmCount;
}

Film::Film(const std::string& name) : Film(name, 90, 0.0) {}

Film::Film(const Film& other) : name(other.name), duration(other.duration), rating(other.rating) { ++filmCount; }

Film::Film(Film&& other) noexcept
    : name(std::move(other.name)), duration(other.duration), rating(other.rating) {
    other.duration = 0;
    other.rating = 0.0;
}

Film& Film::operator=(const Film& other)
{
    if (this != &other)
    {
        name = other.name;
        duration = other.duration;
        rating = other.rating;
    }
    return *this;
}

Film& Film::operator=(Film&& other) noexcept
{
    if (this != &other)
    {
        name = std::move(other.name);
        duration = other.duration;
        rating = other.rating;
        other.duration = 0;
        other.rating = 0.0;
    }
    return *this;
}

Film& Film::SetRating(double newRating)
{
    this->rating = newRating;
    return *this;
}

double Film::GetRating() const { return rating; }

Film Film::operator+(int extraMinutes) const { return Film(name, duration + extraMinutes, rating); }

std::ostream& operator<<(std::ostream& os, const Film& film)
{
    os << "Film: " << film.name << " | Duration: " << film.duration << " min | Rating: " << film.rating;
    return os;
}

std::istream& operator>>(std::istream& is, Film& film)
{
    std::cout << "Enter film name: ";
    is >> film.name;
    std::cout << "Enter duration: ";
    is >> film.duration;
    std::cout << "Enter rating: ";
    is >> film.rating;
    return is;
}

int Film::GetFilmCount() { return filmCount; }

void Film::ShowInfo() const
{
    std::cout << "Film: " << name << " | Duration: " << duration << " min | Rating: " << rating << std::endl;
}

Film::~Film() { --filmCount; }
