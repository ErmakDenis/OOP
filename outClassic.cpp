//---------------------------------------------------
#include "classic_atd.h"
using namespace std;

	// Вывод параметров прямоугольника
	void classic::Out(ofstream& ofst) {

		ofst << "It is Classic array size of " << x << endl;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
				ofst << arrC[i][j] << " ";
			ofst << endl;
		}
		//	<< ", y = " << y << endl;
	}
 // end simple_shapes namespace