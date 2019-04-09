#pragma once
#include "PojazdyLadowe.h"
#include "PojazdyPlywajace.h"


class Amfibia : public Samochod, public Motorowka{

public:
    Amfibia( const PredkoscMaksymalna& x, const PredkoscMaksymalna& y );
    
    PredkoscMaksymalna predkoscMaksymalna_Lad() const;
    PredkoscMaksymalna predkoscMaksymalna_Woda() const;
    virtual std::string typ() const;

};
