#pragma once
#include "OutOfRange.h"
#include "string"
#include <iostream>


class Number{

public:
    Number(std::string name = "unknown", double value = 0.);

    void Print() const;
    double GetValue() const;
    std::string GetName() const;

    static void SetRange(double min, double max);
    static Number* Factory( std::string name, double value);
    static void Destructor(Number** x);

    static double m_min;
    static double m_max;

    static Number** m_ptr;
    static int m_counter;

private:
    std::string m_name;
    double m_value;

};
