#include "Include/LinkedList.h"
#include <fstream>
#include <string>

using namespace std;
class Problema{
  // Se encarga de leer un archivo de texto con la especificacion de un problema...
  // cada archivo indica el problma que es.
  // tipo de problema estara indicado por un numero correspondiente a la numeracion
  // asignada al tipo de problema que se encuentra en el libro.
  private:
    int              geneSize;
    double           fitness;
    string           name;
    int             seleccion;
    LinkedList <int> gene;

  public:
    Problema(){ }
    void readProblem(string pFile){
      string    linea;
      int       contador = 0;
      ifstream  archivo_entrada;

      archivo_entrada.open(pFile.c_str());

      while(getline(archivo_entrada, linea)){
        if(contador == 0){

        }else if(contador == 1){

        } else if (contador == 2){

        }
        contador++;
      } // end of while
      archivo_entrada.close();
    }

};
