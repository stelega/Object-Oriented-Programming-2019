#include "MyText.h"


MyText::MyText( std::string str, const AttFormat::Option format, const AttColor::Option color):
    AttColor(color), AttFormat(format),m_string(str){}

std::string MyText::rawString() const
    { return m_string; }

void MyText::setFormat( AttFormat::Option format )
    { m_format = format; }

void MyText::setText( std::string s )
    { m_string = s; }

void MyText::setColor( AttColor::Option color )
    { m_color = color; }

int MyText::getLength() const
    { return m_string.size(); }