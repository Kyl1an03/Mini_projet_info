#pragma once
#include "eleve.h"
#include <vector>

// D�claration de la classe Groupe

class Groupe {
	// attribut
	string lettre_;
	
	

	//methode :
public:
	vector<Eleve> tabMembre_;
	Groupe(  string lettre);
	inline string getLettre() const { return lettre_; };
	void afficheGroupe();
	//cr�er la fonction affichage trombi
};