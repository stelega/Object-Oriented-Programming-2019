#include "PrintingVisitor.h"
#include <iostream>


void PrintingVisitor::visit( const IntData* x)
    { std::cout << x->getInt() << " "; }


void PrintingVisitor::visit( const FloatData* x)
    { std::cout << x->getFloat() << " "; }
