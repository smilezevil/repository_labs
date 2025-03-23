#include <iostream>
#include "Film.h"
#include "Genre.h"
#include "ProductionCompany.h"

int main()
{
	Film film1("Inception", 148, 8.8); // parameterized constructor
	film1.ShowInfo();

	Genre genre1("Science Fiction", "Movies about future technology, space, and science."); // parameterized constructor
	genre1.PrintGenre();

	ProductionCompany company1("Warner Bros.", 1923, "USA"); // parameterized constructor
	company1.DisplayInfo();

	std::cout << "\nCreating default and delegated objects:\n";

	Film film2; // default constructor
	film2.ShowInfo();

	Genre genre2("Drama"); // parameterized constructor
	genre2.PrintGenre();

	ProductionCompany company2("Universal Pictures"); // delegated constructor
	company2.DisplayInfo();

    return 0;
}