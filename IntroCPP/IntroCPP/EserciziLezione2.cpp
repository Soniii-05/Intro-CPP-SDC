#include "EserciziLezione2.h"
#include <iostream>

using namespace std;


void Esercizio1::Semaforo(StatoSemaforo stato)
{
	switch (stato)
	{
	case Rosso:
		statoAttuale = Rosso;
		cout << "STOP! Attendere" << endl;
		break;
	case Giallo:
		statoAttuale = Giallo;
		cout << "Attenzione! Prepararsi" << endl;
		break;
	case Verde:
		statoAttuale = Verde;
		cout << "VIA! Si può procedere" << endl;
		break;
	default:	
		break;
	}
}

void Esercizio2::CalcoloArea(int base, int altezza)
{
	int areaRettangolo = base * altezza;

	areaRettangolo *= 2; 

	if (areaRettangolo > 100)
	{
		cout << "L'area raddoppiata supera i 100" << endl;
	}
	else {
		cout << "L'area raddoppiata è 100 o meno" << endl;
	}
}

void Esercizio3::StampareNumeriPari(int limite) 
{
	for (int i = 0; i <= limite; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " e' un numero pari" << endl;
		}
	}
}

void Esercizio4::CalcoloCicloWhile(int contatore, int risultato) 
{
	while (contatore > 0) 
	{
		risultato *= contatore;
		contatore--;

	}
	cout << "Nuovo valore di risultato " << risultato << endl;

}