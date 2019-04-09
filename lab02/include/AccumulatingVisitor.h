#pragma once
#include "ElData.h"


class AccumulatingVisitor : public Visitor{

public:
    // metoda przyjmujaca wskaznik na obiekt typu IntData dodajaca do zmiennej
    // m_sum wartosc zmiennej m_d bedacej argumentem tego obiektu. m_d jest typu
    // int, a m_sum typu float, wobec czego rzutujemy m_d na floata
    void visit( const IntData* x);

    // metoda przyjmujaca wskaznik na obiekt typu FloatData dodajaca do zmiennej
    //  m_sum wartosc zmiennej m_d bedacej argumentem tego obiektu.
    void visit( const FloatData* x);
    
    // metoda zwracajaca wartosc zmiennej m_sum
    float getTotalSum();

private:
    float m_sum = 0;

};
