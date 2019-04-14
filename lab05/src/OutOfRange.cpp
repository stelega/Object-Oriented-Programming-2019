#include "OutOfRange.h"
#include "Number.h"


OutOfRange::OutOfRange( std::string name, double value):
    m_name(name), m_value(value){}

OutOfRange::OutOfRange( const OutOfRange& x){
    m_value = x.m_value;
    m_name = x.m_name;
    m_copy = 1;
}

OutOfRange::~OutOfRange(){
    if(m_copy)
        Number::Destructor(Number::m_ptr);
}

    
std::string OutOfRange::GetName() const
    { return m_name; }

double OutOfRange::GetValue() const
    { return m_value; }


std::ostream& operator<<( std::ostream& o, const OutOfRange& data ){
    return  o << "Number named: " << data.GetName() << "has value " 
    << data.GetValue() << " whitch is outside of allowed range: ["
    << Number::m_min << ", " << Number::m_max<< "]";
}
