#include "diagonal_atd.h"
using namespace std;

void diagonal::Summa(ofstream& ofst) {
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += arrD[i][i];
			
		
	}

	ofst << "Sum= " << sum << endl;
}


int diagonal::Summa() {
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arrD[i][j];
		}
	}
	return sum;


}