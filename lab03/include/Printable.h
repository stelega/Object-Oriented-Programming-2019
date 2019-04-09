#pragma once
#include "string"

class Printable{

public:
    virtual ~Printable() = default;
    virtual std::string rawString() const = 0 ;

};
