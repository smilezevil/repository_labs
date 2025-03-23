#ifndef GENRE_H
#define GENRE_H

#include <string>

class Genre
{
private:
	std::string genreName;
	std::string description;

public:
	Genre(); // default constructor
	Genre(const std::string& name, const std::string& description); // parameterized constructor
	Genre(const std::string& name); // delegated constructor

	void PrintGenre() const; //

	~Genre(); // destructor declaration
};

#endif
