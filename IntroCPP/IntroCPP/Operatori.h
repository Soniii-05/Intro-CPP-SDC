#pragma once
#include <iostream>
using namespace std; //std va inserito prima di ogni std (std::cout, std::endl, ecc..)


enum GiorniSettimana		//enum + nome enum
{
	Lunedì,		//enum partono da 0 automaticamente, a meno che non venga specificato
	Martedì,
	Mercoledì,
	Giovedì,
	Venerdì,
	Sabato,
	Domenica
};

class Mese 
{

public:

	GiorniSettimana giornoAttuale = Lunedì;		//valore 0

	int a;
	int b;


	//Operatopri Aritmetici

	int Somma(int a, int b)		// nelle parentesi ci sono i parametri della funzione
	{
		return a + b;
	}

	int Sottrazione(int a, int b) 
	{
		return a - b;
	}

	int	Moltiplicazione(int a, int b) 
	{
		return a * b;
	}

	int Divisione(int a, int b) 
	{
		return a / b;
	}		

	int Modulo(int a, int b)		//resto della divisione di due numeri, se fatto tra float, tornerà un float
	{
		return a % b;
	}


	//Operatori di assegnazione

	void AssegnaValore(int valore) 
	{
		a = valore;		//assegnazione semplice
	}

	void AggiungiEAssegna(int valore) 
	{
		a += valore;		
		//a = a + valore;
	}

	void SottraiEAssegna(int valore) 
	{
		a -= valore;		
		//a = a - valore;
	}

	void MoltiplicaEAssegna(int valore) 
	{
		a *= valore;		
		//a = a * valore;
	}


	//Operatori Relazionali

	bool SonoUguali(int valore) 
	{
		return a == valore;		
	}

	bool SonoDiversi(int valore) 
	{
		return a != valore;		
	}

	bool MaggioreDi(int valore) 
	{
		return a > valore;		
	}

	bool MinoreDi(int valore) 
	{
		return a < valore;		
	}

	bool MaggioreUgualeDi(int valore) 
	{
		return a >= valore;		
	}

	bool MinoreUgualeDi(int valore) 
	{
		return a <= valore;		
	}

	//Operatori Logici

	bool ELogico(bool condizione1, bool condizione2) 
	{
		return condizione1 && condizione2;	 //operatore and
	}

	bool OLogico(bool condizione1, bool condizione2) 
	{
		return condizione1 || condizione2;		//operatore or
	}	

	bool NegazioneLogica(bool condizione) 
	{
		return !condizione;		//operatore not
	}

	//opearatori di incremento e decremento

	void Incrementa() 
	{
		a++;		//incremento di 1, prima utilizzo la variabile e la incremento, 
		++a;		//euivale a = a + 1;
	}

	void Decrementa() 
	{
		b--;		
		--b;
	}

	//operatore ternario

	int ValoreAssoluto(int valore) //al posto dell'if else
	{
		return (valore < 0) ? -valore : valore;		//se valore è minore di 0, ritorna -valore, altrimenti ritorna valore
		//se vero esegue la prima parte di codice prima di :, altrimenti esegue la seconda parte di codice dopo :
	}

	//operatori di inserimento ed estrazione

	void Stampa() {
		cout << "Valore di a: " << a << endl;
	}

	//operatori Bitwise, sono operazioni a livello di bit e servono per operazioni a basso livello

	int EBitwise(int valore)  
	{
		return a & valore;		//operatore and bit a bit
	}

	int OBitwise(int valore) 
	{
		return a | valore;		//operatore or bit a bit
	}

	int XORBitwise(int valore) 
	{
		return a ^ valore;		//operatore xor bit a bit
	}

	int NOTBitwise() 
	{
		return ~a;		//operatore not bit a bit
	}	

	int ShiftLeft(int posizioni) 
	{
		return a << posizioni;		//spostamento a sinistra
	}

	int ShiftRight(int posizioni) 
	{
		return a >> posizioni;		//spostamento a destra
	}

};