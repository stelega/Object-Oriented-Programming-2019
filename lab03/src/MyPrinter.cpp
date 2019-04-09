#include "MyPrinter.h"
#include "MyText.h"
#include "MyLine.h"
#include <iostream>
#include "AttColor.h"
#include "AttFormat.h"

MyPrinter::MyPrinter(unsigned int width)
	: m_width(width) {}

////////////////////////////////////////////////////////////////////////
//  Jedyna metoda klasy MyPrinter ktora powinni Panstwo modyfikowac.  //
////////////////////////////////////////////////////////////////////////
void MyPrinter::print( const Printable & obj ) const{

	const AttColor* ptr = dynamic_cast<const AttColor*>(&obj);
	if(ptr){
		std::cout << MyPrinter::controlSeq( ptr->getColor() );
		std::cout << std::string((60 - ptr->getLength())/2, ' ') << obj.rawString() << std::endl;	
	}

	const AttFormat* ptr2 = dynamic_cast<const AttFormat*>(&obj);
	if(ptr2)
		std::cout << MyPrinter::resetSeq();

}
////////////////////////////////////////////////////////////////////////
///                                                                  ///
///          ANSI/VT100 TERMINAL OUTPUT CONTROL SEQUENCES            ///
///                                                                  ///
////////////////////////////////////////////////////////////////////////

const char * MyPrinter::resetSeq()
	{ return "\e[0m"; }

// formats: BOLD, DIM, UNDERLINED, RESET
const char * MyPrinter::controlSeq( AttFormat::Option opt ){
	switch(opt){
		case AttFormat::BOLD :
			return "\e[1m";
		case AttFormat::DIM :
			return "\e[2m";
		case AttFormat::UNDERLINED :
			return "\e[4m";
		default:
			return MyPrinter::resetSeq();
	}
}

// colors: BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, GRAY, WHITE, RESET
const char * MyPrinter::controlSeq( AttColor::Option opt ){
	switch(opt){
		case AttColor::BLACK :
			return "\e[30m";
		case AttColor::RED :
			return "\e[31m";
		case AttColor::GREEN :
			return "\e[32m";
		case AttColor::YELLOW :
			return "\e[33m";
		case AttColor::BLUE :
			return "\e[34m";
		case AttColor::MAGENTA :
			return "\e[35m";
		case AttColor::CYAN :
			return "\e[36m";
		case AttColor::GRAY :
			return "\e[90m";
		case AttColor::WHITE  :
			return "\e[97m";
		default:
			return MyPrinter::resetSeq();
	}
}

