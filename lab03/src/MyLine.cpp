#include "MyLine.h"


MyLine::MyLine( char c, int length, const AttColor::Option color):
    AttColor(color), m_char(c), m_length(length){}

std::string MyLine::rawString() const
    { return std::string(m_length, m_char); }

void MyLine::setLength( int length )
    { m_length = length; }

void MyLine::setChar( char c )
    { m_char = c; }

void MyLine::setColor( AttColor::Option color )
    { m_color = color; }

int MyLine::getLength() const
    { return m_length; }
