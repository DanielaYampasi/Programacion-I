
/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 19/08/2024
Número de ejercicio: 3
Problema planteado: Promedio de nota.
*/

#include <iostream>
using namespace std;

int main()
{
double n; 
double sum = 0;
int num = 0;
{
 do {
        cout << "Ingresa la calificacion: ";
        cin >> n;
        sum=sum + n;
        num=num + 1;
    } 
    while (n != 0);
    cout << "El promedio de notas es: " << sum / (num - 1);
    return 0;
}

}