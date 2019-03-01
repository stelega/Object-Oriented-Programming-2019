#pragma once
#include "Ksztalt.h"

class Kwadrat : public Ksztalt{

public:
    // konstruktor przypisujacy argumentowi m_bok wartosc zmiennej bok
    Kwadrat(double bok = 1);
    ~Kwadrat() = default;

    void wypisz( std::ostream &o ) const;

    double polePow() const;

private:
    // zmienna przedstawiajaca dlugosc bokow kwadratu
    double m_bok;

};
