/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 19/08/2024
Número de ejercicio: 1
Problema planteado: Área de un triángulo.
*/

#include <iostream>
using namespace std;

int main()
{

float b, h;
cout << "Ingrese la base del triangulo en centimetros: ";
cin >> b ;
cout << "Ingrese la altura del triangulo en centimetros: ";
cin >> h ;
cout << "El área del triangulo es: " << (b*h)/2;

return 0;

}