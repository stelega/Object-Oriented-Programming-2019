#include "Number.h"

double Number::m_min = -255;
double Number::m_max = 255;
int Number::m_counter = 0;
Number** Number::m_ptr;


Number::Number(std::string name, double value) : m_name(name), m_value(value)
    { std::cout << "Manufacturing number " << value << std::endl; }


void Number::Print() const
    { std::cout << GetName() << " = " << GetValue() << std::endl; }

double Number::GetValue() const
    { return m_value; }

std::string Number::GetName() const
    { return m_name; }


void Number::SetRange(double min, double max){
    m_min = min;
    m_max = max;
}

Number* Number::Factory( std::string name, double value){
    Number* ptr = new Number( name, value);
    if(m_counter == 0)
        m_ptr = new Number*[10];

    m_ptr[m_counter++] = ptr; 
    if( value <= Number::m_min || value >= Number::m_max )
        throw OutOfRange(name, value);
    
    return ptr;
}

void Number::Destructor(Number** x){
        std::cout << "Delete numbers... " << std::endl;
        for(int i=0; i<m_counter; i++){
            std::cout << "Destroying number " << x[i]->GetValue() << std::endl;
            delete x[i];
        }
        m_counter = 0;
        delete[] x;
}
