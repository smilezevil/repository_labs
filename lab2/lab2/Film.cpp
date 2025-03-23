#include "Film.h"
#include <iostream>

Film::Film() : name("Unknown"), duration(90), rating(0.0) {} // default constructor

Film::Film(const std::string& name, int duration, double rating) // parameterized constructor
	: name(name), duration(duration), rating(rating) { // member initializer list
}

Film::Film(const std::string& name) // delegated constructor
	: Film(name, 90, 0.0) { // member initializer list
}

void Film::ShowInfo() const // member function definition
{
	std::cout << "Film: " << name 
		<< " | Duration: " << duration << " min"
		<< " | Rating: " << rating << std::endl; 
}

Film::~Film() // destructor definition
{
	std::cout << "Film \"" << name << "\" destroyed." << std::endl;
}