#ifndef FILM_H
#define FILM_H

#include "Media.h"

class Film : public Media {
public:
    Film(std::string t, int y) : Media(t, y) {}

    void display() const override final {  // Переозначення та final
        std::cout << "Film: " << title << " (" << year << ")" << std::endl;
    }

    void describe() const override {  // Переозначення
        std::cout << "This is a film titled '" << title << "' from " << year << "." << std::endl;
    }
};

#endif
