#pragma once
#include "eleve.h"
#include <vector>

// D�claration de la classe Groupe

class Groupe {
	// attribut
	char lettre_;
	vector<Eleve> tabMembre_;
	

	//methode :
public:
	Groupe( const char lettre);
	inline char getLettre() const { return lettre_; };;
	//cr�er la fonction affichage trombi
};