#pragma once
#include "PredkoscMaksymalna.h"


class Pojazd{

public:
    virtual ~Pojazd() = default;

    virtual std::string typ() const = 0;

};


std::ostream& operator<<(std::ostream& o, const Pojazd& data);
