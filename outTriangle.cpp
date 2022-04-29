
//---------------------------------------------------
#include "triangle_atd.h"
using namespace std;

// Вывод параметров прямоугольника
void triangle::Out(ofstream& ofst) {

	ofst << "It is Triangle array size of " << x << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i+1; j++)
			ofst << arrT[i][j] << " ";
		ofst << endl;
	}
	//	<< ", y = " << y << endl;
}
// end simple_shapes namespace