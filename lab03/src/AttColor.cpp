#include "AttColor.h"


AttColor::AttColor( AttColor::Option x): m_color(x) {}

AttColor::Option AttColor::getColor() const 
    { return m_color; }

int AttColor::getLength() const
    { return 0; }
