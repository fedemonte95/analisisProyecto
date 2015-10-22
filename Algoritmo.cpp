#include "Problema.cpp"
using namespace std;

class Algoritmo : public Problema {
  private:
    int       numCruces;
    double    mutacion;
    int       poblacionSize;
    Problema  problema;

  public:
    Algoritmo(int pNumCruces, double pMutacion, Problema pProblema){
      numCruces = pNumCruces;
      mutacion = pMutacion;
      problema = pProblema;
    }
    void resetPoblacion(int pSize){
      poblacionSize = pSize;
    }
    void readPoblacion(){

    }

    void writePoblacion(){

    }
    void generacion(){

    }
    void getGeneracion(){

    }
    void getBest(){

    }
};
