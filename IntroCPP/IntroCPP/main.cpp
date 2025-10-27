#include <iostream> // dalla libreria iostream
#include "IntroCPP.h"
#include "Weapon.h"
#include "EserciziLezione2.h"

using namespace std; //per non dover riscrivere std in ogni riga

struct Studente {
	int anni = 0; //sempre meglio inizializzare le variabili
	float mediaVoti = .0f;
	string Nome = "";
};

struct ArmaCustom {      //struttura arma personalizzata (compito 1.3)
	string NomeArma = "";
	string TipoArma = "";
	int Danno = 0;
};

int main() {


	cout << "Hello world!" << endl;
	
	//cin.get(); //per evitare che si chiuda il programma


	// Base Type c++

	//Integer
	int numeroIntero = -3;  // tipo base, num interi senza decimale con segno
	unsigned int numeroInteroPositivo = 5; //numero intero senza segno

	// Floating point
	float numeroDecimale = 3.14f; // numero decimale seguito sempre da "f"
	float numeroDecimalePiccolo = .2f; // numero decimale più piccolo di 1

	//Floating point con precisione doppia
	double numeroDecimaleDoppiaPrecisione = 3.141592653589793; // numero decimale a precisione doppia

	//Carattere singolo
	char carattere = 'A'; // singolo carattere racchiuso tra apici  singoli '', corrispondenti alla tabella ascii

	//Booleano
	bool valoreBooleano = true; // il valore booleano può essere true o false, di default è true
	bool altroValoreBooleano = false;

	//stampa i valori delle variabili

	cout << "--- Esempio di variabili ---" << endl;
	cout << "Intero: (int)" << numeroIntero << endl;
	cout << "Intero Positivo: " << numeroInteroPositivo << endl;
	cout << "Decimale: " << numeroDecimale << endl;
	cout << "Decimale Piccolo: " << numeroDecimalePiccolo << endl;
	cout << "Decimale Double: " << numeroDecimaleDoppiaPrecisione << endl;
	cout << "Carattere: " << carattere << endl;
	cout << "Bool: " << valoreBooleano << endl;
	cout << "Altro Bool: " << altroValoreBooleano << endl;

	cout << "------------------------" << endl;

	// tipi composti: array, struct, class

	// Array
	int arrayDiInteri[5] = { 1, 2, 3, 4, 5 }; // array di 5 interi
	char arrayDiCharacter[5] = {'A', 'B', 'C', 'D', 'E'}; // array di caratteri
	float arrayDiFloat[5] = { 1.1f, 1.2f, 1.3f, 1.4f, 1.5f };
	float arrayDiBool[5] = { true, false, true, true, false };

	//String (array di caratteri)
	string testo = "Esempio di stringa in C++";
	string arrayDiString[4] = { "Ciao", "Come va", "Array", "Stringa"};

	//Struct (studente)
	Studente randomStudente;
	randomStudente.Nome = "Random";
	randomStudente.anni = 17;
	randomStudente.mediaVoti = 8.4f;
	
	//Class
	Rettangolo rettangolo(5, 10);
	int area = rettangolo.calcoloArea();

	//Homework
	Weapon arma;
	arma.printWeaponInfo();		//stampa le info base (compito 1.2)

	arma.printDamage();			//stampare il danno e ritorna anche il danno	(compito 1.1)

	ArmaCustom armaPersonalizzata;				//compito 1.3
	armaPersonalizzata.NomeArma = "Fucile";
	armaPersonalizzata.TipoArma = "Assalto";
	armaPersonalizzata.Danno = 30;

	
	cout << "Arma Personalizzata: " << endl;		//compito 1.3
	cout << "Nome Arma: " << armaPersonalizzata.NomeArma << endl;
	cout << "Tipo Arma: " << armaPersonalizzata.TipoArma << endl;
	cout << "Danno Arma: " << armaPersonalizzata.Danno << endl;
	cout << "------------------------" << endl;
	cout << endl;


	//Esercizi Lezione 2
	
	cout << "--- Esercizi Lezione 2 ---" << endl;

	Esercizio1 esercizioSemaforo;
	esercizioSemaforo.Semaforo(Giallo);
	cout << endl;

	Esercizio2 esercizioArea;
	esercizioArea.CalcoloArea(12, 5);
	cout << endl;


	Esercizio3 esercizioNumeriPari;
	esercizioNumeriPari.StampareNumeriPari(20);
	cout << endl;

	Esercizio4 esercizioCicloWhile;
	esercizioCicloWhile.CalcoloCicloWhile(5, 1);
	cout << endl;



	//Operatori 

	


	cin.get();


	return 0;
}