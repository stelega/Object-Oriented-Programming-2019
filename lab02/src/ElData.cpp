#include "ElData.h"

void IntData::operator<<( int d )
    { m_d = d; }


int IntData::getInt() const
    { return m_d; }


void IntData::acceptVisitor( Visitor& v) const
    { v.visit( this ); }


void FloatData::operator<<( float d )
    { m_d = d; }


float FloatData::getFloat() const
    { return m_d; }

void FloatData::acceptVisitor( Visitor& v) const
    { v.visit( this ); }
