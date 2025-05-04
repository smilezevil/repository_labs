#include "Film.h"
#include "Genre.h"
#include "ProductionCompany.h"

int main() {
    ProductionCompany* pixar = new ProductionCompany("Pixar Animation Studios");
    Genre* drama = new Drama();
    Genre* comedy = new Comedy();

    Film* film1 = new Film("Soul", 2020, drama, pixar);
    Film* film2 = new Film("Luca", 2021, comedy, pixar);

    pixar->addFilm(film1);
    pixar->addFilm(film2);

    pixar->showFilms();

    delete pixar;
    delete drama;
    delete comedy;

    return 0;
}
