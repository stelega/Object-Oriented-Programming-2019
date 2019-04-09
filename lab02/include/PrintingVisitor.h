#pragma once
#include "ElData.h"


class PrintingVisitor : public Visitor{

public:

    // metoda przyjmujaca wskaznik na obiekt typu IntData wypisujaca na ekran
    // wartosc zmiennej m_d bedacej argumentem tego obiektu.
    void visit( const IntData* x);
    
    // metoda przyjmujaca wskaznik na obiekt typu FloatData wypisujaca na ekran
    // wartosc zmiennej m_d bedacej argumentem tego obiektu.
    void visit( const FloatData* x);

};
