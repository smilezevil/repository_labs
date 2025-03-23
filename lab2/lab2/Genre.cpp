#include "Genre.h"
#include <iostream>

Genre::Genre() : genreName("Unknown"), description("No description") {} // default constructor

Genre::Genre(const std::string& name, const std::string& description) // parameterized constructor
	: genreName(name), description(description) { // member initializer list
}

Genre::Genre(const std::string& name) // delegated constructor
	: Genre(name, "No description") { // member initializer list
}

void Genre::PrintGenre() const
{
	std::cout << "Genre: " << genreName
		<< " — " << description << std::endl;
}

Genre::~Genre() // destructor definition
{
	std::cout << "Genre \"" << genreName << "\" destroyed." << std::endl;
}