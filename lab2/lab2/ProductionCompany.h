#ifndef PRODUCTIONCOMPANY_H
#define PRODUCTIONCOMPANY_H

#include <string>

class ProductionCompany
{
private: 
	std::string companyName; 
	int establishedYear; 
	std::string country; 

public: 
	ProductionCompany(); // default constructor
	ProductionCompany(const std::string& name, int year, const std::string& country); // parameterized constructor
	ProductionCompany(const std::string& name); // delegated constructor

	void DisplayInfo() const;

	~ProductionCompany(); // destructor declaration
};

#endif