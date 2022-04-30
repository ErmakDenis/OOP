//---------------------------------------------------
#ifndef __classic_atd__
#define __classic_atd__
#include <iostream>
#include <fstream>
// Требеутся описание класса shape
#include "arr_atd.h"
 
	// прямоугольник
	class classic : public Arr {
		int x; // размер
		int** arrC;
		int outType;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		classic() {} // создание без инициализации.
	};
 // end simple_shapes namespace
#endif
