#pragma once


#include <string>
using namespace std;


// Déclaration de la classe Eleve

class Eleve {
	// attribut
	string nom_;
	string prenom_;
	string coordonnee_vignette_;

	//methode :
public :
	Eleve();
	inline string getNom() const { return nom_; };
	inline string getPrenom() const { return prenom_; };
	inline string getCoordonnee() const { return coordonnee_vignette_; };
	 

};