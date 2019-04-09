#pragma once

class IntData;
class FloatData;

// Klasa bazowa klas AccumulatingVisitor oraz PrintingVisitor. Jest abstrakcyjna
class Visitor{

public:
    virtual ~Visitor() = default;
    // metoda czysto wirtualna przyjmujaca wskaznik na obiekt typu IntData
    virtual void visit( const IntData* x) = 0;

    // metoda czysto wirtualna przyjmujaca wskaznik na obiekt typu FloatData
    virtual void visit( const FloatData* x) = 0;

};
