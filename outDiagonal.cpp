//---------------------------------------------------
#include "diagonal_atd.h"
using namespace std;


	// Вывод параметров треугольника
	void diagonal::Out(ofstream& ofst) {
		ofst << "It is diagonal array size of " << x << endl;
		if (outType == 1)
		{
			for (int i = 0; i < x; i++)
			{
				for (int j = 0; j < x; j++)
				{
					ofst << arrD[i][j] << " ";
				}
				ofst << endl;
			}
		}
		if (outType == 2)
		{
			for (int i = 0; i < x; i++)
			{
				for (int j = 0; j < x; j++)
				{
					ofst << arrD[j][i] << " ";
				}
				ofst << endl;
			}
		}
		if (outType == 3)
		{
			for (int i = 0; i < x; i++)
			{
				for (int j = 0; j < x; j++)
				{
					ofst << arrD[i][j] << " ";
				}
				
			}
			ofst << endl;
		}

	}
 // end simple_shapes namespace