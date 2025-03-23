#ifndef FILM_H
#define FILM_H

#include <string>

class Film
{
private:
	std::string name;
	int duration;
	double rating;

public:
	Film(); // default constructor

	Film(const std::string& name, int duration, double rating); // parameterized constructor

	Film(const std::string& name); // delegated constructor

	void ShowInfo() const;

	~Film(); // destructor declaration
};

#endif
