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