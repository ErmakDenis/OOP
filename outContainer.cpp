
//---------------------------------------------------
#include "container_atd.h"
using namespace std;

	// Вывод содержимого контейнера
	void container::Out(ofstream& ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
		}
	}

#include "container_atd.h"
using namespace std;

	// Вывод содержимого контейнера
	void container::Out(ofstream& ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
			//cont[i]->Summa(ofst);

		}
	}
