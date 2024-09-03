/*Crear una función que reciba una pila por referencia y un número. La función debe sacar la
primera ocurrencia de dicho valor de la pila sino se repite el valor en la pila, de lo contrario
debe eliminar todos los valores repetidos a excepción de la primera ocurrencia. Si el valor no
se encuentra en la pila muestra un mensaje indicando que no pertenece a la pila. Imprimir la
pila al final para verificar si hubo o no modificaciones.*/

#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void eliminarValor(Pila<int> &pila, int);
void mostrarPila(Pila<int> &pila);

int main()
{

  Pila<int> pila;
  int cantidad, i = 0, guardar, eliminar;

  cout << " Ingrese la cantidad de elementos que tendra la pila: ";
  cin >> cantidad;
  do
  {

    cout << 1 + i << ". Ingrese un valor: ";
    cin >> guardar;
    pila.push(guardar);
    i++;
  } while (i < cantidad);

  cout << " Ingrese el elemento que desea eliminar: ";
  cin >> eliminar;

  eliminarValor(pila, eliminar);

  mostrarPila(pila);

  return 0;
}

void eliminarValor(Pila<int> &pila, int eliminar)
{
  Pila<int> aux, aux1;
  int contador = 0, j;

  do
  {

    j = pila.pop();
    aux1.push(j);

  } while (!pila.esVacia());

  while (!aux1.esVacia())
  {

    j = aux1.pop();

    if (j == eliminar && contador < 2)
    {
      contador++;
    }
    else if (j == eliminar && contador >= 2)
    {
      aux.push(j);
    }
    else
    {
      aux.push(j);
    }
  }

  while (!aux.esVacia())
  {
    j = aux.pop();
    pila.push(j);
  }
}

void mostrarPila(Pila<int> &pila)
{

  Pila<int> pilaAux;
  int j;
  do
  {

    j = pila.pop();
    pilaAux.push(j);

  } while (!pila.esVacia());

  do
  {

    j = pilaAux.pop();
    cout << j << endl;
    pila.push(j);

  } while (!pilaAux.esVacia());
}