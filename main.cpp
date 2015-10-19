#include <iostream>
#include <fstream>
#include <string>
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
    void probar(){
      cout<< "\n Si hay herencia \n";
    }
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


int main(){
  Algoritmo hola;
  hola.probar();
  cout << "escriba el nombre del archivo: ";
  string archivo;
  cin >> archivo;
  cout << archivo << endl;
  return 0;
}
