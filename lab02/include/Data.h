#pragma once

class Visitor;

// Klasa Bazowa dla klas IntData oraz FloatData. 
class Data{

public:
    // czysto abstrakcyjna klasa przyjmująca wizytatora
    virtual void acceptVisitor( Visitor& v) const  = 0;

};
