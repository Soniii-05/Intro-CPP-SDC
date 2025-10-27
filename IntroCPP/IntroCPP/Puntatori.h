#pragma once
#include"StruttureDiControllo.h"


class Puntatore // i puntatori sono variabili che contengono l'indirizzo di memoria di un'altra variabile
{
public :
	Puntatore();
	~Puntatore();

	int value = 42;

	int* intPointer = nullptr;
	char* charPointer = nullptr;

	Calcolatrice* calcolatricePointer = nullptr;

private:
	int HP = 100;
	void initPointers();

};