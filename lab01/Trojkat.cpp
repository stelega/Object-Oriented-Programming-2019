#include "Trojkat.h"
#include <iostream>
#include "math.h"


Trojkat::Trojkat( double a, double b, double c ): m_a(a), m_b(b), m_c(c)
{}


void Trojkat::wypisz(std::ostream &o) const
    { std::cout << "Trojkat o bokach: " << m_a << " " << m_b << " " << m_c << std::endl; }


double Trojkat::polePow() const{
    double x = (m_a + m_b + m_c)/2;
    return sqrt( x * (x-m_a) * (x-m_b) * (x-m_c) );
}
