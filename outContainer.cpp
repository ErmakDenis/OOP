//---------------------------------------------------
#include "container_atd.h"
using namespace std;

	// ����� ����������� ����������
	void container::Out(ofstream& ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
		}
	}
 // end simple_shapes namespace