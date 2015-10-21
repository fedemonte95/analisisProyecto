#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Include/LinkedList.h"
using namespace std;

class Problema{
  private:
    int geneSize;
    double fitness;
    string name;
    string seleccion;
    LinkedList <int> gene;
  public:
    Problema(){ }
};

class Algoritmo : public Problema {
  private:
    int     numCruces;
    double  mutacion;
    int     poblacionSize;
    Problema p;
  public:
    Algoritmo(){}
    void resetPoblacion(int pSize){
      poblacionSize = pSize;
    }
    void readPoblacion(){}
    void writePoblacion(){}
    void generacion(){}
    void getGeneracion(){}
    void getBest(){}
};

int  menu(){
  int option = 0;
  cout << " \t MENU" << endl;
  cout << "Escoja el algoritmo genetico: " << endl;
  cout << "1. GTI VERTEX COVER" << endl;
  cout << "2. SP5 RECUBRIMIENTO MINIMO" << endl;
  cout << "Escriba el numero de la opcion: ";
  cin >> option;
  if((option == 1) || (option == 2)){
    return option;
  } else {
    menu();
  }
}

void readFiles(){
  string linea;
  ifstream archivo_entrada;

  archivo_entrada.open("texto.txt");

  if(archivo_entrada.fail()){
    cout << "Error opening file"<< endl;
  }
  int contador = 0;
  string primeraLinea;
  string segundaLinea;
  string terceraLinea;
  while(getline(archivo_entrada, linea) && (linea != "\n")){
    cout<<linea<<endl;
    if(contador == 0){
      primeraLinea = linea;
    } else if(contador == 1){
      segundaLinea = linea;
    }
    else{
      terceraLinea  = terceraLinea + "-" + linea;
    }
    contador ++;
  }
  archivo_entrada.close();


}

int main(){
  Algoritmo hola;
  string problema;
  cout << "Indique el problema que desea ejecutar: "<< endl;
  cout << "SP5" << endl;
  cout << "GT1" << endl;
  cout << "Escriba el nombre del problema que desea: ";
  cin >> problema;
  if(problema ==  "GT1" ){
    printf("\n Es el GT1  \n");
  } else if(problema == "SP5"){
    printf("\n Es el SP5 \n");
  } else {
    cout << "entrada incorrecta" << endl;
  }
  cout << endl;
  return 0;
}
