#include <iostream> //
#include <string> //
#include <stdio.h> //
#include <stdlib.h> // random
#include "Algoritmo.cpp"


using namespace std;

int main(){
  //variables iniciales
  string      problemFile;
  string      initialPobDataFile;
  int         poblacionSize;
  int         cantidadGeneraciones;
  double      porcentajeMutacion;
  int         selecionPadres;
  string      outputTxt;

  cout << "Escriba nombre del archivo del problema: ";
  cin >> problemFile;
  cout << endl;

  cout << "Escriba nombre del archivo con datos de la poblacion inicial: ";
  cin >> initialPobDataFile;
  cout << endl;

  cout << "Escriba cantidad de generaciones";
  cin >> cantidadGeneraciones;
  cout << endl;

  cout << "Escriba el tamano de la poblacion ";
  cin >> poblacionSize;
  cout << endl;

  cout << "Escriba el porcentaje de la mutacion: ";
  cin >> porcentajeMutacion;
  cout << endl;

  cout << "Escriba el tipo de seleccion de padres: ";
  cin >> selecionPadres;
  cout << endl;

  cout << "Escriba el archivo de datos para el output: ";
  cin >> outputTxt;
  cout << endl;

  return 0;
}
