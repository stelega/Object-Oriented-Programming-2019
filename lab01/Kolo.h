#pragma once
#include "Ksztalt.h"


class Kolo : public Ksztalt{

public:
    // konstruktor przypisujacy argumentowi m_promien wartosc zmiennej promien
    Kolo(double promien = 1);
    ~Kolo() = default;

    void wypisz(std::ostream &o) const;

    double polePow() const;

private:
    // zmienna przedstawiajaca promien kola
    double m_promien;

};
