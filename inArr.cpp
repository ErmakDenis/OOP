//---------------------------------------------------
#include "arr_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "classic_atd.h"
#include "diagonal_atd.h"
#include "triangle_atd.h"
using namespace std;

	// Ввод параметров обобщенной фигуры
	Arr* Arr::In(ifstream& ifst) {
		Arr* sp;
		int k;
		ifst >> k;
		
		switch (k) {
		case 1:
			sp = new classic;
			
			break;
		case 2:
			sp = new diagonal;
			break;


		case 3:
			sp = new triangle;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
 // end simple_shapes namespace