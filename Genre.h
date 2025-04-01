#ifndef GENRE_H
#define GENRE_H

#include <string>
#include <iostream>

class Genre
{
private:
    std::string genreName;
    std::string description;
    static int genreCount; // Статичне поле для підрахунку жанрів

public:
    Genre(); // Конструктор за замовчуванням
    Genre(const std::string& name, const std::string& description); // Конструктор з параметрами
    Genre(const std::string& name); // Делегований конструктор
    Genre(const Genre& other); // Конструктор копіювання
    Genre(Genre&& other) noexcept; // Конструктор переміщення

    Genre& operator=(const Genre& other); // Оператор присвоєння
    Genre& operator=(Genre&& other) noexcept; // Оператор переміщувального присвоєння

    friend std::ostream& operator<<(std::ostream& os, const Genre& genre);
    friend std::istream& operator>>(std::istream& is, Genre& genre);

    static int GetGenreCount(); // Статичний метод

    void PrintGenre() const;
    ~Genre(); // Деструктор
};

#endif
