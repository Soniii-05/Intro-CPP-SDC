#pragma once


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

//5. Ciclo do-while per Input Utente
