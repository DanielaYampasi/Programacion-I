/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 21/08/2024
Número de ejercicio: 10
Problema planteado: Digitos.
*/

#include <iostream>

using namespace std;

int main() {
    int n, c = 0;

    cout << "Ingresa un numero de tipo entero : ";
    cin >>n;

    if (n==0) {
        c= 1;
    } else {
       
        while (n!=0) {
            n/= 10;
            c++;
        }
    }
    cout << "El numero tiene " <<c<< " dígitos." << endl;
    return 0;
}