#ifndef __diaginal_atd__
#define __diagonal_atd__
// ��������� �������� ������ shape
#include "arr_atd.h"

	// �����������
	class diagonal : public Arr {
		int x; // ������
		int** arrD;
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		void OutClassic(ofstream& ofst);
		diagonal() {} // �������� ��� �������������.
	};
// end simple_shapes namespace
#endif
