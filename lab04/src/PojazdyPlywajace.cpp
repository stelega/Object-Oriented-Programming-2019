#include "PojazdyPlywajace.h"


Motorowka::Motorowka( const PredkoscMaksymalna& x ) : m_max(x) {}

PredkoscMaksymalna Motorowka::predkoscMaksymalna() const 
    { return m_max; }

std::string Motorowka::typ() const
    { return "Motorowka"; }