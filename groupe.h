#pragma once
#include "eleve.h"
#include <vector>

// Déclaration de la classe Groupe

class Groupe {
	// attribut
	string lettre_;
	
	

	//methode :
public:
	vector<Eleve> tabMembre_;
	Groupe(  string lettre);
	inline string getLettre() const { return lettre_; };
	void afficheGroupe();
	//créer la fonction affichage trombi
};