#include "ProductionCompany.h"
#include <iostream>

ProductionCompany::ProductionCompany() // default constructor
	: companyName("Unknown"), establishedYear(2000), country("Unknown") { // member initializer list
}

ProductionCompany::ProductionCompany(const std::string& name, int year, const std::string& country) // parameterized constructor
	: companyName(name), establishedYear(year), country(country) { // member initializer list
}

ProductionCompany::ProductionCompany(const std::string& name) // delegated constructor
	: ProductionCompany(name, 2000, "Unknown") { // member initializer list
}

void ProductionCompany::DisplayInfo() const
{
	std::cout << "Production Company: " << companyName
		<< " | Founded: " << establishedYear
		<< " | Country: " << country << std::endl;
}

ProductionCompany::~ProductionCompany() // destructor definition
{
	std::cout << "Company \"" << companyName << "\" destroyed." << std::endl;
}