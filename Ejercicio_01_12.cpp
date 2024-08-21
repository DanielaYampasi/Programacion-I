/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 21/08/2024
Número de ejercicio: 11
Problema planteado: Multiplos.
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Ingresa un numero:";
    cin >> n;
    cout << "Ingresa otro numero: ";
    cin >> m;
    if (n % m == 0 || m % n == 0) {
        cout << "Uno de los numeros es myltiplo del otro";
    } else {
        cout << "No son multiplo del otro" ;
    }

    return 0;
}