#ifndef PRODUCTIONCOMPANY_H
#define PRODUCTIONCOMPANY_H

#include <string>
#include <iostream>

class ProductionCompany
{
private:
    std::string companyName;
    int establishedYear;
    std::string country;
    static int companyCount; // Статичне поле для підрахунку компаній

public:
    ProductionCompany(); // Конструктор за замовчуванням
    ProductionCompany(const std::string& name, int year, const std::string& country); // Конструктор з параметрами
    ProductionCompany(const std::string& name); // Делегований конструктор
    ProductionCompany(const ProductionCompany& other); // Конструктор копіювання
    ProductionCompany(ProductionCompany&& other) noexcept; // Конструктор переміщення

    ProductionCompany& operator=(const ProductionCompany& other); // Оператор присвоєння
    ProductionCompany& operator=(ProductionCompany&& other) noexcept; // Оператор переміщувального присвоєння

    friend std::ostream& operator<<(std::ostream& os, const ProductionCompany& company);
    friend std::istream& operator>>(std::istream& is, ProductionCompany& company);

    static int GetCompanyCount(); // Статичний метод

    void DisplayInfo() const;
    ~ProductionCompany(); // Деструктор
};

#endif
