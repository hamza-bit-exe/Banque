#include "Compte.h"
#include<iostream>
#include<string>
using namespace std;
Compte::Compte()
{
	this->nomProprietaire = 0;
	this->numCompte = 0;
	this->solde = 0.0;
}

Compte::Compte(int nC, char* nP, double S)
{
	this->numCompte = nC;
	this->nomProprietaire = nP;
	this->solde = S;

}

Compte::Compte(const Compte& C)
{
	this->numCompte = C.numCompte;
	this->nomProprietaire = C.nomProprietaire;
	this->solde = C.solde;
}

Compte::~Compte()
{
	delete this;
}

double Compte::retirerArgent(double rA)
{
	return this->solde = this->solde - rA;

}

double Compte::deposerArgent(double dA)
{
	return this->solde = this->solde + dA;
}

void Compte::consulterSolde()
{
	string s;
	s = "Votre solde est " + to_string(this->solde) + "Dhs";
	cout << s << endl;
}
