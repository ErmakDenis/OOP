//---------------------------------------------------
#include "classic_atd.h"
using namespace std;

	// ¬вод параметров пр€моугольника
	void classic::InData(ifstream& ifst) {
		ifst >>x;
		ifst >> outType;
		arrC = new int* [x];
		for (int i = 0; i < x; i++)
		{
			arrC[i] = new int[x];
			for (int j = 0; j < x; j++)
			{
				ifst >> arrC[i][j];
			}
		}
	}
 // end simple_shapes namespace