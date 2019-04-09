#include "PojazdyLadowe.h"


Samochod::Samochod( const PredkoscMaksymalna& x ): m_max(x) {}

PredkoscMaksymalna Samochod::predkoscMaksymalna() const 
    { return m_max; }

std::string Samochod::typ() const
    { return "Samochod"; }


std::string Rower::typ() const
    { return "Rower"; }