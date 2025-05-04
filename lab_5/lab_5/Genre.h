#ifndef GENRE_H
#define GENRE_H

#include <iostream>
#include <string>

class Genre {
public:
    virtual void describeGenre() const = 0;  // Чисто віртуальна функція (інтерфейс)
    virtual ~Genre() {}  // Віртуальний деструктор
};

#endif
