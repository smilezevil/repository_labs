#pragma once
#include <string>

class Genre {
protected:
    std::string name;
public:
    Genre(const std::string& name);
    virtual ~Genre();

    virtual void describe() const;
};

class Drama : public Genre {
public:
    Drama();
    void describe() const override;
};

class Comedy : public Genre {
public:
    Comedy();
    void describe() const override;
};
