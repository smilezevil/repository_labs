#include "Film.h"

int main() {
    Genre action("Action");
    ProductionCompany wb("Warner Bros");
    std::vector<Actor> cast = { Actor("Tom Hardy"), Actor("Anne Hathaway") };
    Director director("Christopher Nolan");

    FeatureFilm ff("Inception", 2010, action, wb, cast, director, true);
    Documentary doc("Inside AI", 2023, Genre("Tech"), wb, cast, director, "Artificial Intelligence");

    ff.print();
    doc.print();

    return 0;
}