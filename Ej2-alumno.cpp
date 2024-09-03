/*
Ejercicio N°2
Escribir una función Reemplazar que tenga como argumentos una pila con tipo de
elemento int y dos valores int: viejo y nuevo de forma que, si el primer valor
(viejo) aparece en algún lugar de la pila, sea reemplazado por el segundo (nuevo)..
*/

#include <iostream>
#include "Pila/Pila.h"

using namespace std;

void reemplazar(Pila<int> &pila, int viejo, int nuevo);

int main()
{
  Pila<int> pila;
  int cantidad, i = 0, guardar, viejo, nuevo;

  cout << " Ingrese la cantidad de elementos que tendra la pila: ";
  cin >> cantidad;
  do
  {

    cout << 1 + i << ". Ingrese un valor: ";
    cin >> guardar;
    pila.push(guardar);
    i++;
  } while (i < cantidad);

  cout << " Ingrese el numero que desea sacar: ";
  cin >> viejo;
  cout << " Ingrese el numero que desea ingresar: ";
  cin >> nuevo;

  reemplazar(pila, viejo, nuevo);

  while (!pila.esVacia())
  {
    cout << pila.pop() << endl;
  }

  return 0;
}

void reemplazar(Pila<int> &pila, int viejo, int nuevo)
{

  Pila<int> aux;
  int k;
  while (!pila.esVacia())
  {

    k = pila.pop();
    if (k == viejo)
    {
      aux.push(nuevo);
    }
    else
    {
      aux.push(k);
    }
  }

  while (!aux.esVacia())
  {
    k = aux.pop();
    pila.push(k);
  }
}
