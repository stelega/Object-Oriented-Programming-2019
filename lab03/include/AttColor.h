#pragma once


class AttColor{

public: 
    enum Option{
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        GRAY,
        WHITE 
    };
    
    AttColor( AttColor::Option x);
    virtual ~AttColor() = default;
    
    virtual AttColor::Option getColor() const;
    virtual int getLength() const;

protected:
    AttColor::Option m_color;

};
