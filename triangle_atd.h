#ifndef __triangle_atd__
#define __triangle_atd__
#include <iostream>
#include <fstream>
// ��������� �������� ������ shape
#include "arr_atd.h"

	// triangle
class triangle : public Arr {
	int x; // ������
	int** arrT;
public:
	// �������������� ��������� ������
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	//void Summa(ofstream& ofst);
	triangle() {};// �������� ��� �������������.
	
};
// end simple_shapes namespace
#endif





