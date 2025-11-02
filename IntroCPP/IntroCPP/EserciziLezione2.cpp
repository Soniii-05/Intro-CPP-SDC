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


void Esercizio5::InputUtente() 
{

	do {

		cout << continua << endl;
		cin >> risposta;

		if (risposta == 'n') 
		{
			continua = false;
		}
		else if (risposta == 's') 
		{
			continua = true;
		}
		else 
		{
			cout << "Input non valido" << endl;
		}


	} while (risposta = 'n');

}


void Esercizio6::VerificaStudente(int punti, int presenze, int requisitoMinimo) 
{
	if (punti >= requisitoMinimo && presenze >= 80) 
	{
		cout << "Promosso" << endl;
	}
	else {
		cout << "Non promosso" << endl;
	}

}


void Esercizio7::ForEachColor() 
{
	
	for (const string& colore : colori)
	{
		cout << "Il colore e': " << colore << endl;
	}
}




//void Esercizio8::CalcoloPrezzo() 
//{
//	for (auto& prezzo : prezzi) 
//	{
//		prezzo = static_cast<int>(prezzo * 1.1);
//	}
//
//	for (const int& prezzo : prezzi) 
//	{
//		cout << "Prezzo aggiornato: " << prezzo << endl;
//	}
//
//}

void Esercizio9::ControlloPermessi() 
{
	if (permessi & MASCHERA_SCRITTURA) {
		cout << "Il permesso di scrittura e' attivo" << endl;
	}
	else {
		cout << "Il permesso di scrittura NON e' attivo" << endl;
	}
}


void Esercizio10::BitWaiseShift()
{
	cout << "Valore iniziale: " << valoreIniziale << endl;
	cout << "Valore moltiplicato (<< 3): " << valoreMoltiplicato << endl;
	cout << "Valore diviso (>> 2): " << valoreDiviso << endl;
}


void EsercizioPuntatori1::StampaValorePuntatore()
{

	cout << "Valore di numero: " << numero << endl;
	cout << "Valore tramite p_numero: " << *p_numero << endl;
}

void EsercizioPuntatori2::AggiornaPrezzo()
{
	*p_prezzo = 149.99;

	cout << "Nuovo valore di prezzo: " << *p_prezzo << endl;
}


void EsercizioPuntatori3::Raddoppia(int* ptr)
{
	int valore = 5;

	cout << "Valore prima della chiamata: " << valore << endl;

	Raddoppia(&valore);

	cout << "Valore dopo la chiamata: " << valore << endl;
}

void EsercizioPuntatori4::Scambia(int* a, int* b)
{
	int a = 10;
	int b = 20;

	cout << "Prima dello scambio: a = " << a << ", b = " << b << endl;

	//Scambia(&a, &b); 

	cout << "Dopo lo scambio: a = " << a << ", b = " << b << endl;
}


void EsercizioPuntatori5::StampaStringa()
{
	char parola[] = "Puntatore";
	char* p_parola = parola;
	*p_parola = 'C';


	cout << "Stringa modificata: " << parola << endl;
}


void EsercizioPuntatori6::ArrayNumeri()
{
	int numeri[] = { 1, 3, 5, 7, 9 };   
	int* p_array = numeri;

	cout << "Il terzo elemento dell'array e': " << *(p_array + 2) << endl;
}


void EsercizioPuntatori7::ArrayVoti()
{
	int voti[] = { 22, 25, 30, 28 };
	int* p = voti; 
	int dimensione = sizeof(voti) / sizeof(voti[0]); 

	for (int i = 0; i < dimensione; i++) {
		cout << "Elemento " << i << ": " << *p << endl;
		p++;
	}
}

void EsercizioPuntatori8::Allocazione()
{
	int* p_valore = new int;

	*p_valore = 123;

	cout << "Valore allocato: " << *p_valore << endl;

	delete p_valore;
	p_valore = nullptr;
}

void EsercizioPuntatori9::AccessoMembri() 
{
	struct Punto {
		int x;
		int y;
	};

	Punto* p_punto = new Punto;

	p_punto->x = 10;
	p_punto->y = 5;

	cout << "x = " << p_punto->x << ", y = " << p_punto->y << endl;

	delete p_punto;
	p_punto = nullptr;
}

void EsercizioPuntatori10::PuntatoriAPuntatori() 
{
	int a = 100;          
	int* p1 = &a;         
	int** p2 = &p1;      

	
	cout << "Valore di a (usando **p2): " << **p2 << endl;

	cout << "Indirizzo di a (usando p1): " << p1 << endl;

	cout << "Indirizzo di p1 (usando p2): " << p2 << endl;
}
