#pragma once
#include "NicePrinter.h"


class Factory{

public:
    // szablon, ktory pozwala na stworzenie funkcji przyjmujacej zmienna
    // jakiegos typu oraz boola(value). Gdy wartosc value jest falsz zwraca jedynie
    // wartosc przechowywana w zmiennej statycznej. W przeciwnym wypadku przypisuje do
    // tej zmiennej wartosc t i rowniez ja zwraca.
    template<typename T>
    T base( T t, bool value = true ){
        static T temp;
        if(value)  
            temp = t;
        return temp;
    }

    // szablon, ktory pozwala na stworzenie funkcji zwracajacej
    //  zmienna powstala przez wywolanie funkcji base()
    template<typename T>
    T product()
        { return base( T(), false ); }

};
