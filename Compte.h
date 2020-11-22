#pragma once

class Compte
{
private:
	int numCompte;
	char* nomProprietaire;
	double solde;
public:
	// Les constructeurs 
	Compte();                      //sans param.
	Compte(int , char* , double );   //avec param.
	Compte(const Compte&);       //de recopie
	~Compte();

	double retirerArgent(double);
	double deposerArgent(double);
	void consulterSolde();





};
