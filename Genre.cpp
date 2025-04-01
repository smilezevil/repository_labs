#include "Genre.h"

int Genre::genreCount = 0;

Genre::Genre() : genreName("Unknown"), description("No description") { ++genreCount; }

Genre::Genre(const std::string& name, const std::string& description)
    : genreName(name), description(description) {
    ++genreCount;
}

Genre::Genre(const std::string& name) : Genre(name, "No description") {}

Genre::Genre(const Genre& other) : genreName(other.genreName), description(other.description) { ++genreCount; }

Genre::Genre(Genre&& other) noexcept
    : genreName(std::move(other.genreName)), description(std::move(other.description)) {
}

Genre& Genre::operator=(const Genre& other)
{
    if (this != &other)
    {
        genreName = other.genreName;
        description = other.description;
    }
    return *this;
}

Genre& Genre::operator=(Genre&& other) noexcept
{
    if (this != &other)
    {
        genreName = std::move(other.genreName);
        description = std::move(other.description);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Genre& genre)
{
    os << "Genre: " << genre.genreName << " | " << genre.description;
    return os;
}

std::istream& operator>>(std::istream& is, Genre& genre)
{
    std::cout << "Enter genre name: ";
    is >> genre.genreName;
    std::cout << "Enter description: ";
    is.ignore();
    std::getline(is, genre.description);
    return is;
}

int Genre::GetGenreCount() { return genreCount; }

void Genre::PrintGenre() const
{
    std::cout << "Genre: " << genreName << " | " << description << std::endl;
}

Genre::~Genre() { --genreCount; }
