#ifndef __arr_atd__
#define __arr_atd__
#include <iostream>
#include <fstream>
using namespace std;

	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class Arr {
		
	public:
		// иденитфикаци€, порождение и ввод фигуры из потока
		static Arr* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0; // вывод
		virtual void Summa(ofstream& ofst) = 0; // вычисление периметра
		virtual int Summa() = 0;
		virtual void OutClassic(ofstream& ofst)=0;

	};
 // end simple_shapes namespace
#endif