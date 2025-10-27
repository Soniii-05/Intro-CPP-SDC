#include "StruttureDiControllo.h"
#include <vector>

using namespace std;

void Calcolatrice::EsempioIfElse(int numero)
{
	if (numero > 0)		//se il numero � maggiore di 0 (operatori relazionari(
	{

	}else if (numero < 0)		//se il numero � minore di 0
	{

	}
	else		//altrimenti (quindi se � uguale a 0)
	{

	}


}

void Calcolatrice::EsempioSwitchCase(GiorniSettimana operatore)
{
	switch (operatore)		//controlla il valore di operatore
	{
	case Luned�:		//se � uguale a Luned�
		break;
	case Marted�:		//se � uguale a Marted�
		break;
	case Mercoled�:		//se � uguale a Mercoled�
		break;
	case Gioved�:		//se � uguale a Gioved�
		break;
	case Venerd�:		//se � uguale a Venerd�
		break;
	case Sabato:		//se � uguale a Sabato
		break;
	case Domenica:		//se � uguale a Domenica
		break;
	default:		//se non corrisponde a nessuno dei casi precedenti
		break;
	}
}

void Calcolatrice::EsempioFor(int limite)
{
	for (int i = 0; i < limite; i++)		//ciclo for che parte da 0, finch� i � minore di limite, incrementando i di 1 ad ogni ciclo
	{
	}
}

void Calcolatrice::EsempioWhile(int limite)
{
	int i = 0;		//inizializzo i a 0
	while (i < limite)		//finch� i � minore di limite
	{
		i++;		//incremento i di 1 ad ogni ciclo
	}
}

void Calcolatrice::EsempioDoWhile(int limite)
{
	int i = 0;		//inizializzo i a 0
	do		//esegui il ciclo almeno una volta
	{
		i++;		//incremento i di 1 ad ogni ciclo
	} while (i < limite);		//finch� i � minore di limite
}

void Calcolatrice::EsempioForEach()
{
	vector<int> numeri = { 1, 2, 3, 4, 5 }; // esempio di collezione di interi
	
	for (int numero : numeri)		//per ogni numero nella collezione numeri
	{

		numero += 5;		//aggiunge 5 ad ogni numero
	}
}