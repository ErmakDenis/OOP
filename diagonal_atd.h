#ifndef __diaginal_atd__
#define __diagonal_atd__
// ��������� �������� ������ shape
#include "arr_atd.h"

	// �����������
	class diagonal : public Arr {
		int x; // ������
		int** arrD;
		int outType;
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		diagonal() {} // �������� ��� �������������.
	};
// end simple_shapes namespace
#endif
