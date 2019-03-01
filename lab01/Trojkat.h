#pragma once
#include "Ksztalt.h"

class Trojkat : public Ksztalt{

public:
    // konstruktor przypisujacy argumentom obiektu wartosci zmiennych a, b oraz c
    Trojkat(double a = 1, double b = 1, double c = 1);
    ~Trojkat() = default;
    
    void wypisz(std::ostream &o) const;

    double polePow() const;




private:
    // zmienne przedstawiajace dlugosci bokow trojkata
    double m_a;
    double m_b;
    double m_c;

};
