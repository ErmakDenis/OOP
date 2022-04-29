//---------------------------------------------------
#include "container_atd.h"
using namespace std;

	// Ввод содержимого контейнера
	void container::In(ifstream& ifst) {
		while (!ifst.eof()) {
			if ((cont[len] = Arr::In(ifst)) != 0) {
				len++;
			}
		}
	}
// end simple_shapes namespace