#include "secventa.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int dim;
    cout << "Numarul de cuvinte din secventa:";
    cin >> dim;

    string secventa[50];

    cout << "Introduceti secventa:";
    citire_secventa_siruri(secventa, dim);

    string sir;
    cout << "Introduceti sirul pe care doriti sa il cautati in secventa:";
    cin >> sir;
   
    apartenenta_sir_secventa(secventa, sir,dim);


}