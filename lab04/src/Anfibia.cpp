#include "Anfibia.h"


Amfibia::Amfibia( const PredkoscMaksymalna& x, const PredkoscMaksymalna& y ):
    Samochod(x), Motorowka(y) {}

PredkoscMaksymalna Amfibia::predkoscMaksymalna_Lad() const
    { return Samochod::m_max; }

PredkoscMaksymalna Amfibia::predkoscMaksymalna_Woda() const
    { return Motorowka::m_max; }

std::string Amfibia::typ() const
    { return "Amfibia"; }
