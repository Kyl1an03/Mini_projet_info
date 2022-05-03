#pragma once
#include <iostream>
using namespace std;
#include "groupe.h";

class Trombi{
	
	string date_; // date de la séance
		
	
public:
	
	Trombi();
	void menu();
	inline string getDate() { return date_; };
	void editFeuilleAppel(Groupe groupe);
};