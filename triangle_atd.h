#ifndef __triangle_atd__
#define __triangle_atd__
#include <iostream>
#include <fstream>
// Требеутся описание класса shape
#include "arr_atd.h"

	// triangle
class triangle : public Arr {
	int x; // размер
	int** arrT;
public:
	// переопределяем интерфейс класса
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	//void Summa(ofstream& ofst);
	triangle() {};// создание без инициализации.
	
};
// end simple_shapes namespace
#endif





