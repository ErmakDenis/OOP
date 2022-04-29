//----------------------------------------------------
// Вычисление периметра прямоугольника

#include "classic_atd.h"
using namespace std;

void classic::Summa(ofstream& ofst) {
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arrC[i][j];
		}
	}
	ofst << "Sum= " << sum<<endl;
	
	
}
