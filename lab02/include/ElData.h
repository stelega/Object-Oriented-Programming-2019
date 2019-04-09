#ifndef ELData_h
#define ELData_h

#include "Visitor.h"
#include "Data.h"


// Klasa pochodna klasy Data. Pelnie role kontenera na zmienne typu int.
class IntData : public Data {

public:
    // Konstruktor przyjmujacy zmienna typu int przypisujacy ja do zmiennej m_d
    IntData( int d ): m_d( d ){}

    // Przeladowanie operatora <<. Przyjmuje inta i przypisuje go do zmiennej m_d
    void operator<<( int d );

    // Metoda zwracajaca zmienna m_d
    int getInt() const;
    
    // Metoda wywolujaca metode visit z obiektu typu Visitor. Przekazuje jej wskaznik na siebie.
    void acceptVisitor( Visitor& v) const;

private:
    // kontener
    int m_d;
};


// Klasa pochodna klasy Data. Pelnie role kontenera na zmienne typu float.
class FloatData : public Data {

public:
    // Konstruktor przyjmujacy zmienna typu float przypisujacy ja do zmiennej m_d
    FloatData( float d ) : m_d( d ){}
    
    // Przeladowanie operatora <<. Przyjmuje floata i przypisuje go do zmiennej m_d
    void operator<<( float d );
    
    // Metoda zwracajaca zmienna m_d
    float getFloat() const;
        
    // Metoda wywolujaca metode visit z obiektu typu Visitor. Przekazuje jej wskaznik na siebie.
    void acceptVisitor( Visitor& v) const;

private:
    // kontener
    float m_d; 

};

#endif
