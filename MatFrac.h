/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 * archivo: Fraccion-h
 * Evaluacion diagnostica
 *----------------------------------------------------------*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fstream>
#include "Fraccion2.h"

using namespace std;

class MatFrac
{
private:
    string matrix1;
    Fraccion2 m; 
public:
    MatFrac();
    MatFrac(string matrix1); 
    ~MatFrac();

    double** lecturamatricesysuma();  
    void sumamatrices(double **m1, double **m2);
    void impresionmatriz(double **matriz); 

    
};

MatFrac::MatFrac()
{
    this->matrix1 = "null"; 

}

MatFrac::MatFrac(string matrix1)
{
    this->matrix1=matrix1;
}

MatFrac::~MatFrac()
{
}

double** MatFrac::lecturamatricesysuma()
{

    int filas = 4; 
    int cols = 4; 

    ifstream fp(this->matrix1);
    static double **matriz = new double*[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new double[cols]; 
        for (int j = 0; j < cols; j++)
        {
            fp >> matriz[i][j]; 
        }
        
    }
    return matriz; 
    fp.close();

}

void MatFrac::sumamatrices(double **m1, double **m2)
{

    string sumados[4][4]; 

    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sumados[i][j] = this->m.sumados1(m1[i][j],m2[i][j]); 
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << sumados[i][j]; 
            cout << " "; 
        }
        cout <<"\n"; 
        
    }

    cout << *(*(m1+0)+0); 
    cout << *(*(m2+0)+0); 

}


void MatFrac::impresionmatriz(double **matriz)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j]; 
            cout << " "; 
        }
        cout <<"\n"; 
        
    }
    

}