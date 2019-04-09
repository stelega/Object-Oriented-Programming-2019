#include "AttFormat.h"


AttFormat::AttFormat( AttFormat::Option x): m_format(x) {}

AttFormat::Option AttFormat::getFormat() const 
        { return m_format; }
