#include "groupe.h"
#include <fstream>
#include <iostream>
using namespace std;

Groupe::Groupe(string lettre)
{
	lettre_ = lettre;
	// recuperation des étudiants du groupe de la lettre à partir du fichier csv
	string filename = "trombinoscope/fise1.csv";
	string temp_id;
	string temp_usr;
	string temp_nom;
	string temp_prenom;
	string temp_grp;
	string temp_coord;
	string file_contents; // notre variable ou nous allons stocke les donnes de notre fichier csv
    ifstream fich(filename);
	if (!fich.is_open()) {
		cerr << "Fichier impossible à ouvir" << endl;
	}
	else
	{
		cout << "fichier ouvert" << endl;
		for (unsigned int i = 1; i < 127; i++)
		{
			getline(fich, temp_id , ';');
			getline(fich, temp_usr, ';');
			getline(fich, temp_nom, ';');
			getline(fich, temp_prenom, ';');
			getline(fich, temp_grp, ';');
			getline(fich, temp_coord);
			if ( temp_grp == lettre)
			{
				Eleve temp(temp_nom, temp_prenom, temp_coord);
				tabMembre_.push_back(temp);
				elevePresent_.push_back(temp);
			}
		}
		
		
	}
	
}

 void Groupe::afficheGroupe()
{
	 for (unsigned int i = 0; i< tabMembre_.size(); i++  )
	 {
		 cout << "Etudiant " << i + 1 << endl;
		 cout << tabMembre_[i].getNom() << " ";
		 cout << tabMembre_[i].getPrenom() << " ";
		 cout << tabMembre_[i].getCoordonnee() << endl;

	 }


}


 