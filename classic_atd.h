//---------------------------------------------------
#ifndef __classic_atd__
#define __classic_atd__
#include <iostream>
#include <fstream>
// ��������� �������� ������ shape
#include "arr_atd.h"
 
	// �������������
	class classic : public Arr {
		int x; // ������
		int** arrC;
		int outType;
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		classic() {} // �������� ��� �������������.
	};
 // end simple_shapes namespace
#endif
