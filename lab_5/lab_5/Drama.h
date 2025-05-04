#ifndef DRAMA_H
#define DRAMA_H

#include "Genre.h"

class Drama : public Genre {
public:
    void describeGenre() const override {
        std::cout << "This is a Drama genre." << std::endl;
    }
};

#endif
