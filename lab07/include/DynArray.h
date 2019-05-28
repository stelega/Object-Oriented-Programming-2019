#pragma once
#include <iostream>




//Szablon klasy DynaArray
template <typename T>
class DynArray {

public:	

	// Konstruktor przyjmujacy rozmiar kontenera i alokujacy odpowuiadajaca ilosc pamieci
	DynArray(int size) : m_size(size) 
		{ m_container = new T[m_size]; }
	
	// Konstruktor przyjmujacy rozmiar kontenera i alokujacy odpowuiadajaca ilosc pamieci,
		// kopiujacy otrzymana tablice
	DynArray(int size, const T *obj) : m_size(size) {
	 	m_container = new T[m_size];
	 	for(int i=0; i<m_size; i++){
	 		m_container[i] = obj[i];
			}
	}
	
	// kosntruktor kopiujacy
	DynArray( const DynArray& arr ):
		DynArray(arr.m_size, arr.m_container){}

	//destruktor
	~DynArray()
		{ delete[] m_container; }
	
	// metoda zwracajaca rozmiar kontenera
	int size() const 
		{ return m_size; }
	
	// metoda zwracajaca i-ty element kontenera
	T get(int i) const
		{ return m_container[i]; }

	// przeladowanie operatora [], zwraca element o indeksie podanym jako argument
	T& operator[](int index)
		{ return m_container[index]; }
	
	// przeladowanie operatora [], tym razem const
	T& operator[](int index) const
		{ return m_container[index]; }

	
	// klasa iterujaca po kontenerze
	class Iterator{
		
		public:
		// konstruktor przyjmujacy wskaznink na T, przypisuje go do zmiennej m_ptr 
		Iterator( T* ptr ):
			m_ptr(ptr) {}

		// przeladowanie operatora !=
		bool operator!=( Iterator ptr ){
			if( ptr.m_ptr != m_ptr )
				return true;
			return false;
		}

		// przeladowanie operatora !=
		T& operator++()
			{ return *( m_ptr++ ); }

		// przeladowanie operatora *, zwraca dereferencje m_ptr;
		T& operator*()
			{ return *m_ptr; }


		// przeladowanie operatora ->, zwraca m_ptr
		T* operator->()
			{ return m_ptr; }

	private:
		T* m_ptr;

	};

	// metoda zwracajaca pierwszy element kontenera;
	Iterator begin()
		{ return m_container; }

	// metoda zwracajaca pierwsza pozycje za kontenerem;
	Iterator end()
		{ return m_container + m_size; }


private:
	int m_size;
	T* m_container;

	
};

// szablon przeladowania operatora strumienia wyjscia 
template <typename T>
std::ostream& operator<<( std::ostream& o, const DynArray<T>& data ){
	o << "{" << "\"" << data.get(0) << "\""; 
	for(int i=1; i<data.size(); i++)
		o << ",\"" << data.get(i) << "\"";
	
	o << "}";
	return o;
}
