#ifndef __arr_atd__
#define __arr_atd__
#include <iostream>
#include <fstream>
using namespace std;

	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class Arr {
	public:
		// �������������, ���������� � ���� ������ �� ������
		static Arr* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ����
		virtual void Out(ofstream& ofst) = 0; // �����
	//	virtual void Summa(ofstream& ofst) = 0; // ���������� ���������
	};
 // end simple_shapes namespace
#endif