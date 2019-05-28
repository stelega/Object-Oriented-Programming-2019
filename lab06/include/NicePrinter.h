#pragma once
#include <iostream>
#include <iomanip>


// klasa pomagajaca w wypisywaniu danych na ekran
class NicePrinter{

public:
    // konstruktor przyjmujacy inta ustawiajacy
    // maksymalna ilosc cyfr w prefixu
    NicePrinter( int );

    // szablon, ktory pozwala na stworzenie funktora wypisujacego
    // na ekran zmiennej przekazanej jako argument
    template<typename T>
    void operator()( const T& t ) const {
        std::cout << std::setw(max_prefix) << m_prefix++
        << ": "<< t << std::endl;
    }

private:
    static int m_prefix; 
    int max_prefix;

};
