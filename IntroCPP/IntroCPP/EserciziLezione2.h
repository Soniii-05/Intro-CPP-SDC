#pragma once
#include <vector>
#include <string>

//Esercizio 1: 1. Enum e switch (Base)

enum StatoSemaforo 
{
	Rosso,
	Giallo,
	Verde
};

class Esercizio1 
{
	int statoAttuale = Giallo;

public:
	void Semaforo(StatoSemaforo);

};


//Esercizio 2:  Operatori Aritmetici, Assegnazione e if/else

class Esercizio2
{
	int base = 12;
	int anltezza = 5;

public:
	void CalcoloArea(int base, int altezza);


};

//Esercizio 3: Ciclo for e Operatore Modulo (%)

class Esercizio3 
{
	int limite = 20;

public:
	void StampareNumeriPari(int limite);

};

//Esercizio 4: Ciclo while e Operatori di Incremento

class Esercizio4 
{
	int contatore = 5;
	int risultato = 1;

public: 
	void CalcoloCicloWhile(int contatore, int risultato);
};


//Esercizio 5: Ciclo do-while per Input Utente

class Esercizio5
{
	bool continua = true;
	char risposta;

public:
	void InputUtente();
};

//Esercizio 6: Operatori Relazionali e Logici

class Esercizio6
{
	int punti = 85;
	int presenze = 90;
	int requisitoMinimo = 60;

public:
	void VerificaStudente(int punti, int presenze, int requisitoMinimo);
};

//Esercizio 7: Ciclo for-each (Range-Based For Loop)


class Esercizio7
{
	vector<string> colori = {"Rosso", "Verde", "Blu", "Giallo"};

public: 
	void ForEachColor();
};




//Esercizio 8: Ciclo for-each per Modifica (Riferimento)

//class Esercizio8
//{
//	vector<int> prezzi = { 10, 25, 5, 40 };
//
//public:
//	void CalcoloPrezzo();
//};

//Esercizio 9:

class Esercizio9 
{
	int permessi = 6; // binario 0110
	const int MASCHERA_SCRITTURA = 2; // binario 0010

public:
	void ControlloPermessi();

};

//Esercizio 10:

class Esercizio10
{
	int valoreIniziale = 13;
	int valoreMoltiplicato = valoreIniziale << 3; // 13 * 8 = 104
	int valoreDiviso = valoreMoltiplicato >> 2;   // 104 / 4 = 26

public:
	void BitWaiseShift();
};



//PUNTATORI


//Esercizio 1

class EsercizioPuntatori1
{
	int numero = 42;
	int* p_numero = &numero;

public:
	void StampaValorePuntatore();

};


//Esercizio 2

class EsercizioPuntatori2
{
	double prezzo = 99.90;
	double* p_prezzo = &prezzo;

public:
	void AggiornaPrezzo();

};

//Esercizio 3

class EsercizioPuntatori3
{


public:
	void Raddoppia(int* ptr) {
		*ptr = *ptr * 2;
	}
};

//Esercizio4

class EsercizioPuntatori4
{

public:
	void Scambia(int* a, int* b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
};

//Esercizio 5

class EsercizioPuntatori5
{
	

public:
	void StampaStringa();
};


//Esercizio 6

class EsercizioPuntatori6
{

public:
	void ArrayNumeri();
};

//Esercizio 7

class EsercizioPuntatori7
{


public: 
	void ArrayVoti();
};


//Esercizio 8

class EsercizioPuntatori8
{

public:
	void Allocazione();
};


//Esercizio 9

class EsercizioPuntatori9
{


public:
	void AccessoMembri();
};


//Esercizio 10
class EsercizioPuntatori10
{


public: 
	void PuntatoriAPuntatori();
};
