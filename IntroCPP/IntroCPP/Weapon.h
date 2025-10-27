#pragma once
#include <iostream>
#include <string>

using namespace std;

class Weapon			//definizione della classe Weapon (compito 1.2)
{

private:
	string weaponName = "Desert Eagle";		//nome dell'arma
	string weaponType = "Magnum";		//tipo di arma
	string ammoType = ".44";		//tipo di munizioni
	int ammoCount = 12;				//numero di munizioni
	float reloadTime = 1.4f;			//tempo di ricarica 
	bool isBlocked = false;				//se l'arma è bloccata(inceppata)
	float damage = 15;				//quanto danno fa l'arma

public:
	void printWeaponInfo() const;	//stampa le informazioni base dell'arma (compito 1.2)
	float printDamage() const;		//restituisce il danno dell'arma (compito 1.1)
	
};