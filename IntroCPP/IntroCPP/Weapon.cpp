#include <iostream>
#include "Weapon.h"
using namespace std;

void Weapon::printWeaponInfo() const		//stampa le informazioni base dell'arma (compito 1.2)
{
	
	cout << "Informazioni base dell'arma: " << endl;

	cout << "Nome arma: " << weaponName << endl;
	cout << "Tipo arma: " << weaponType << endl;
	cout << "Tipo munizioni: " << ammoType << endl;
	cout << "Numero munizioni: " << ammoCount << endl;
	cout << "Tempo ricarica: " << reloadTime << " secondi" << endl;
	cout << "L'arma e' inceppata? " << isBlocked << endl;
	cout << "Danno arma: " << damage << endl;

	cout << "------------------------" << endl;
}

float Weapon::printDamage() const		//restituisce il danno dell'arma (compito 1.1)
{
	//cout << "Danno arma: " << damage << endl;
	return damage;
}