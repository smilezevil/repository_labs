#pragma once
#include <string>

class Media {
protected:
    std::string title;
    int year;
public:
    Media(const std::string& title, int year);
    virtual ~Media();

    virtual void display() const;
};
