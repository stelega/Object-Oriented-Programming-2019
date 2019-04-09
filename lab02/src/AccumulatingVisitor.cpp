#include "AccumulatingVisitor.h"


void AccumulatingVisitor::visit( const IntData* x)
    { m_sum += static_cast<float>(x->getInt()); }


void AccumulatingVisitor::visit( const FloatData* x)
    { m_sum += x->getFloat(); }


float AccumulatingVisitor::getTotalSum()
    { return m_sum; }
