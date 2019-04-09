#pragma once
#include <iostream>


class PredkoscMaksymalna{

public:
    PredkoscMaksymalna( int value = 0 );

    int predkoscMaksymalna() const;

private:
    int m_value;

};


std::ostream& operator<<(std::ostream& o, const PredkoscMaksymalna& data);
