#pragma once
#include "Pojazdy.h"


class PojazdPlywajacy : public virtual Pojazd{

public:
    virtual ~PojazdPlywajacy() = default;

};


class Motorowka : public virtual PojazdPlywajacy{

public:
    Motorowka( const PredkoscMaksymalna& x );
    virtual ~Motorowka() = default;
    PredkoscMaksymalna predkoscMaksymalna() const;
    virtual std::string typ() const;

protected:
    PredkoscMaksymalna m_max;

};
