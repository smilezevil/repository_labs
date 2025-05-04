#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string>

class Media {
protected:
    std::string title;
    int year;

public:
    Media(std::string t, int y) : title(t), year(y) {}
    virtual ~Media() {}  // Віртуальний деструктор

    virtual void display() const {  // Перша віртуальна функція
        std::cout << "Title: " << title << ", Year: " << year << std::endl;
    }

    virtual void describe() const {  // Друга віртуальна функція
        std::cout << "Media description: " << title << ", Year: " << year << std::endl;
    }
};

#endif
