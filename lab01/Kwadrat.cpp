#include "Kwadrat.h"
#include <iostream>


Kwadrat::Kwadrat(double bok): m_bok(bok)
{}


void Kwadrat::wypisz(std::ostream &o) const
    { std::cout << "Kwadrat o boku: " << m_bok << std::endl; }


double Kwadrat::polePow() const
    { return m_bok * m_bok; }
