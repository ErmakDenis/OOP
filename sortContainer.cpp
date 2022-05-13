#include "container_atd.h"




// Сортировка содержимого контейнера
void container::Sort(container* c) {
	Arr* tmp;

	for (int i = 0; i < c->len - 1; i++) {
		for (int j = 0; j < c->len - i - 1; j++) {
			if (cont[j]->Summa() > cont[j + 1]->Summa())
			{
				cont[j]->Summa();

				tmp = cont[j];
				cont[j] = cont[j + 1];
				cont[j + 1] = tmp;
			}
		}
	}





	/*for (int i = 0; i < c->len - 1; i++) {
		for (int j = i + 1; j < c->len; j++) {
			if (cont[i]->Compare(cont[i + 1]))
			{
				tmp = cont[i];
				cont[i] = cont[i + 1];
				cont[i + 1] = tmp;
			}
		}
	}
	*/


	/*
	for (int i = 0; i < c->len - 1; i++) {
		for (int j = i + 1; j < c->len; j++) {
			if (c[i].)//> c[i+1].Sum()
			{
				
				container tmp;
				tmp = c[i];
				c[i] = c[i + 1];
				c[i + 1]=tmp;
			}
		}
	}*/
}
