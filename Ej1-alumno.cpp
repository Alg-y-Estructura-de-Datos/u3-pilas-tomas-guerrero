/*
Escriba un programa que introduzca una palabra y utilice una pila para imprimir
la misma palabra invertida.

 */

#include <iostream>
#include "Pila/Pila.h"

using namespace std;

int main()
{
  Pila<char> pila;
  char letra;
  int i = 0;
  cout << " Ingrese una palabra, letra por letra: ";

  do
  {
    cin.get(letra);
    if (letra != '.')
    {
      pila.push(letra);
    }
  } while (letra != '.');

  while (!pila.esVacia())
  {
    cout << pila.pop();
  }

  return 0;
}