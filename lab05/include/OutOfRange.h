#pragma once
#include "string"
#include <iostream>

class OutOfRange{

public:
    OutOfRange( std::string s = " ", double value = 0.);
    OutOfRange( const OutOfRange& x);
    ~OutOfRange();

    std::string GetName() const;
    double GetValue() const;
    double GetMin() const;
    double GetMax() const;

private:
    std::string m_name;
    double m_value;
    bool m_copy = 0;
    
};


std::ostream& operator<<( std::ostream& o, const OutOfRange& data );
