#include "Film.h"
#include "Drama.h"
#include "Comedy.h"

int main() {
    // Статичне прив'язування
    Film film("Inception", 2010);
    film.display();  // Викликається метод з класу Film

    // Динамічне прив'язування з вказівником на базовий клас
    Media* mediaPtr = new Film("The Matrix", 1999);
    mediaPtr->display();  // Викликається метод Film::display()
    mediaPtr->describe();  // Викликається метод Film::describe()

    // Динамічне прив'язування з посиланням на базовий клас
    Media& mediaRef = film;
    mediaRef.display();  // Викликається метод Film::display()

    // Використання віртуальних деструкторів для коректного очищення пам'яті
    delete mediaPtr;

    // Тестування чисто віртуальних функцій (інтерфейс)
    Genre* genre = new Drama();
    genre->describeGenre();  // Опис жанру Drama
    delete genre;

    genre = new Comedy();
    genre->describeGenre();  // Опис жанру Comedy
    delete genre;

    return 0;
}