#pragma once
#include "Printable.h"
#include "AttColor.h"
#include <iostream>


class MyLine : public Printable, public AttColor{

public:
    MyLine( char c, int length, const AttColor::Option color);

    virtual std::string rawString() const;
    
    void setLength( int length );

    void setChar( char c );

    void setColor( AttColor::Option color );

    int getLength() const;

private:
    char m_char;
    int m_length;

};
