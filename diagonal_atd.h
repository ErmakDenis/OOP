#ifndef __diaginal_atd__
#define __diagonal_atd__
// Требуется описание класса shape
#include "arr_atd.h"

	// треугольник
	class diagonal : public Arr {
		int x; // размер
		int** arrD;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		void OutClassic(ofstream& ofst);
		diagonal() {} // создание без инициализации.
	};
// end simple_shapes namespace
#endif
