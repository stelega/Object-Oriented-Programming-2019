#include "Pojazdy.h"
#include <iostream>


std::ostream& operator<<(std::ostream& o, const Pojazd& data)
     { return o << data.typ(); }
