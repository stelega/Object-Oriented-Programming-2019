#pragma once
#include "Pojazdy.h"


class PojazdLadowy : public virtual Pojazd{

public:
    virtual ~PojazdLadowy() = default;

};


class Samochod : public virtual PojazdLadowy{

public:
    Samochod( const PredkoscMaksymalna& x );
    ~Samochod() = default;
    
    PredkoscMaksymalna predkoscMaksymalna() const;
    virtual std::string typ() const;

protected:
    PredkoscMaksymalna m_max;

};


class Rower : public PojazdLadowy{

public:
    Rower() = default;
    ~Rower() = default;

    virtual std::string typ() const;

};
