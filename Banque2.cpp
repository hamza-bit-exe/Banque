#include <iostream>
#include "Compte.h"

int main()
{

    Compte A(50003, "Ahmed Amine", 8050.175);
    A.consulterSolde();
    A.deposerArgent(12000.00);
    A.consulterSolde();
    A.retirerArgent(1420.56);
    A.consulterSolde();
}

