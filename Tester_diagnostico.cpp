/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez
 * archivo: Tester_diagnostico.cpp
 *----------------------------------------------------------*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fstream>
#include "Fraccion2.h"
#include "MatFrac.h"


using namespace std;

int main()
{

    //FRACCION2
    Fraccion2 *m1 = new Fraccion2(57,2); 
    cout << "Primer fraccion: " << m1->tipoab() << endl;
    Fraccion2 *m2 = new Fraccion2(25,2);
    cout << "Segunda Fraccion " << m2->tipoab() << endl;
    double frac1 =  m1->getfraccion();
    double frac2 = m2->getfraccion();
    cout << "suma: " << m1->sumados1(frac1,frac2)  << endl;
    cout << "Multiplicacion: " << m1->multiplicacion(frac1,frac2)  << endl;
    cout <<"\n" << endl;

    //MATRICES FRACCIONES
    cout <<"\n" << endl;
    cout <<"matriz 1" << endl;
    cout <<"\n" << endl;

    MatFrac *w1 = new MatFrac("output.txt");
    double **mat1 = w1->lecturamatricesysuma(); 
    w1->impresionmatriz(mat1);

    cout <<"+" << endl;

    cout <<"\n" << endl;
    cout <<"matriz 2" << endl;
    cout <<"\n" << endl;

    MatFrac *f2 = new MatFrac("output2.txt");
    double **mat2 = f2->lecturamatricesysuma(); 
    f2->impresionmatriz(mat2); 

    cout <<"\n" << endl;
    cout <<"=" << endl;
    cout <<"\n" << endl;

    f2->sumamatrices(mat2,mat1);
    
    cout <<"\n" << endl;
    cout <<"\n" << endl;

    //LIBERAR MEMORIA DE MAT1
    for (int i = 0; i < 4; i++)
    {
        delete[] mat1[i]; 
    }
    delete[] mat1; 

    //LIBERAR MEMORIA DE MAT2
    for (int i = 0; i < 4; i++)
    {
        delete[] mat2[i]; 
    }
    delete[] mat2; 
    


 
    return 0; 
}

