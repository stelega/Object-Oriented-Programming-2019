#pragma once
#include "Printable.h"
#include "AttColor.h"
#include "AttFormat.h"
#include <iostream>


class MyText : public Printable, public AttColor, public AttFormat {

public:
    MyText( std::string str, const AttFormat::Option format, const AttColor::Option color);

    virtual std::string rawString() const;

    void setFormat( AttFormat::Option format );

    void setText( std::string s );

    void setColor( AttColor::Option color );

    int getLength() const;

private:
    std::string m_string;

};

