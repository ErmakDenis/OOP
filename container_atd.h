//---------------------------------------------------
#ifndef __container_atd__
#define __container_atd__
#include "arr_atd.h"

	// ���������� ��������� �� ������ ����������� �������
	class container {
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		Arr* cont[max_len];
	public:
		void In(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		void Clear(); // ������� ���������� �� �����
		//void Summa(ofstream& ofst);


		container(); // ������������� ����������
		~container() { Clear(); } // ���������� ����������
	};
 // end simple_shapes namespace
#endif
