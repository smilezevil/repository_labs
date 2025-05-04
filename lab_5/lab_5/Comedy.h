#ifndef COMEDY_H
#define COMEDY_H

#include "Genre.h"

class Comedy : public Genre {
public:
    void describeGenre() const override {
        std::cout << "This is a Comedy genre." << std::endl;
    }
};

#endif
