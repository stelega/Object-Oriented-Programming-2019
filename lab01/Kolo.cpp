#include "Kolo.h"
#include <iostream>


Kolo::Kolo(double promien): m_promien(promien){}


void Kolo::wypisz(std::ostream &o) const
    { std::cout << "Kolo o promieniu: " << m_promien << std::endl; }


double Kolo::polePow() const
   { return 3.1415 * m_promien * m_promien; }
