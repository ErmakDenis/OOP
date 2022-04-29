
//---------------------------------------------------
#include "triangle_atd.h"
using namespace std;

// ¬вод параметров пр€моугольника
void triangle::InData(ifstream& ifst) {
	ifst >> x;
	arrT = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arrT[i] = new int[i+1];
		for (int j = 0; j < i+1; j++)
		{
			ifst >> arrT[i][j];
		}
	}
}
// end simple_shapes namespace