#pragma once
#include <iostream>

class Ksztalt{

public:
    // wrtualny destruktor
    virtual ~Ksztalt(){}
    
    // metoda wirtualna przyjmujący referencje na strumień wyjścia
    // i wypisujaca na ekran informacje o figurze
    virtual void wypisz(std::ostream &o) const = 0;
    // metoda wirtualna wypisujaca pole powieszchni figury
    virtual double polePow() const = 0;
    
    // metoda statyczna przyjmujaca referencje na obiekt typu Ksztalt wywolujaca metode "wypisz"
    static void wypisz(const Ksztalt &x)
        { x.wypisz( std::cout ); }

};
