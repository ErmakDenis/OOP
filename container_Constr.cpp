
//---------------------------------------------------
#include "container_atd.h"

	// ������������� ����������
	container::container() : len(0) { }
	// ������� ���������� �� ���������
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	
} // end simple_shapes namespace