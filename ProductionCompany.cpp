#include "ProductionCompany.h"

int ProductionCompany::companyCount = 0;

ProductionCompany::ProductionCompany()
    : companyName("Unknown"), establishedYear(2000), country("Unknown") {
    ++companyCount;
}

ProductionCompany::ProductionCompany(const std::string& name, int year, const std::string& country)
    : companyName(name), establishedYear(year), country(country) {
    ++companyCount;
}

ProductionCompany::ProductionCompany(const std::string& name) : ProductionCompany(name, 2000, "Unknown") {}

ProductionCompany::ProductionCompany(const ProductionCompany& other)
    : companyName(other.companyName), establishedYear(other.establishedYear), country(other.country) {
    ++companyCount;
}

ProductionCompany::ProductionCompany(ProductionCompany&& other) noexcept
    : companyName(std::move(other.companyName)), establishedYear(other.establishedYear), country(std::move(other.country)) {
}

ProductionCompany& ProductionCompany::operator=(const ProductionCompany& other)
{
    if (this != &other)
    {
        companyName = other.companyName;
        establishedYear = other.establishedYear;
        country = other.country;
    }
    return *this;
}

ProductionCompany& ProductionCompany::operator=(ProductionCompany&& other) noexcept
{
    if (this != &other)
    {
        companyName = std::move(other.companyName);
        establishedYear = other.establishedYear;
        country = std::move(other.country);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const ProductionCompany& company)
{
    os << "Production Company: " << company.companyName
        << " | Founded: " << company.establishedYear
        << " | Country: " << company.country;
    return os;
}

std::istream& operator>>(std::istream& is, ProductionCompany& company)
{
    std::cout << "Enter company name: ";
    is >> company.companyName;
    std::cout << "Enter year of establishment: ";
    is >> company.establishedYear;
    std::cout << "Enter country: ";
    is >> company.country;
    return is;
}

int ProductionCompany::GetCompanyCount() { return companyCount; }

void ProductionCompany::DisplayInfo() const
{
    std::cout << "Production Company: " << companyName
        << " | Founded: " << establishedYear
        << " | Country: " << country << std::endl;
}

ProductionCompany::~ProductionCompany() { --companyCount; }
