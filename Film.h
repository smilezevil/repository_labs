#ifndef FILM_H
#define FILM_H

#include <string>
#include <iostream>

class Film
{
private:
    std::string name;
    int duration;
    double rating;
    static int filmCount; // Статичне поле для підрахунку кількості фільмів

public:
    Film(); // Конструктор за замовчуванням
    Film(const std::string& name, int duration, double rating); // Конструктор з параметрами
    Film(const std::string& name); // Делегований конструктор
    Film(const Film& other); // Конструктор копіювання
    Film(Film&& other) noexcept; // Конструктор переміщення

    Film& operator=(const Film& other); // Оператор присвоєння
    Film& operator=(Film&& other) noexcept; // Оператор переміщувального присвоєння

    Film& SetRating(double newRating); // Використання this
    double GetRating() const; // Використання const

    Film operator+(int extraMinutes) const; // Бінарний оператор для збільшення тривалості
    friend std::ostream& operator<<(std::ostream& os, const Film& film); // Оператор <<
    friend std::istream& operator>>(std::istream& is, Film& film); // Оператор >> для введення даних

    static int GetFilmCount(); // Статичний метод
    void ShowInfo() const;
    ~Film(); // Деструктор
};

#endif
