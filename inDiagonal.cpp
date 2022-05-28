//---------------------------------------------------
#include "diagonal_atd.h"
using namespace std;

	// ¬вод параметров треугольника
	void diagonal::InData(ifstream& ifst) {
		ifst >> x;
		arrD = new int* [x];
		ifst >> outType;
		for (int i = 0; i < x; i++)
		{
			arrD[i] = new int[x];
			for (int j = 0; j < x; j++)
			{
				if (i == j)
					ifst >> arrD[i][j];
				else
					arrD[i][j] = 0;
			}
		}
	}
 // end simple_shapes namespace