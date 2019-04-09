#include "PredkoscMaksymalna.h"


PredkoscMaksymalna::PredkoscMaksymalna( int value ): m_value(value) {}

int PredkoscMaksymalna::predkoscMaksymalna() const
    { return m_value; }


std::ostream& operator<<(std::ostream& o, const PredkoscMaksymalna& data)
    { return o << data.predkoscMaksymalna() << "km/h"; }
