#ifndef FRACCION2_H
#define FRACCION2_H
/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 * archivo: Fraccion-h
 * Evaluacion diagnostica
 *----------------------------------------------------------*/
#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

class Fraccion2
{
private:
    int numerador1, denominador1;
public:
    Fraccion2(/* empty constructor */);
    Fraccion2(int numerador1, int denominador1);
    ~Fraccion2();

    string tipoab();  
    double getfraccion(); 

    string sumados1(double fraccion1, double fraccion2); 
    string multiplicacion(double fraccion1, double fraccion2); 
   
};

Fraccion2::Fraccion2(/* empty constructor */)
{
    this->denominador1 = 1;
    this->numerador1 = 0; 

}

Fraccion2::Fraccion2(int numerador1, int denominador1)
{
    this->denominador1 = denominador1;
    this->numerador1 = numerador1; 
    //reduccion primera fraccion
    for(int i=2;i<19;i++){
        while(this->numerador1%i==0 && this->denominador1%i==0)
        {
            this->numerador1=this->numerador1/i;
            this->denominador1=this->denominador1/i;
        }
        
    }

}

Fraccion2::~Fraccion2()
{
}



string Fraccion2::tipoab() 
{

    string strA = to_string(this->numerador1);
    string strB = to_string(this->denominador1);

    string final = strA + '/' + strB;
    return final;  

}

double Fraccion2::getfraccion()
{
    double ab = (double)this->numerador1/ (double)this->denominador1;
    return ab;  
}

string Fraccion2::sumados1(double fraccion1, double fraccion2)
{
    double frac1 = fraccion1;
    double num1=1;
    double dem1=1;
    double aux = 1;
    while (!(aux==frac1))
    {
        aux=num1/dem1; 
        if(aux<frac1){
            num1++;
        }else if(aux>frac1){
            num1--;
            dem1++;
        } 
        /* code */
    }

    double frac2 = fraccion2;
    double num2=1;
    double dem2=1;
    double aux2 = 1;
    while (!(aux2==frac2))
    {
        aux2=num2/dem2; 
        if(aux2<frac2){
            num2++;
        }else if(aux2>frac2){
            num2--;
            dem2++;
        } 
        /* code */
    }

    int numfinal1 = (int)num1;
    int demfinal1 = (int)dem1;
    int numfinal2 = (int)num2;
    int demfinal2 = (int)dem2;

    if(demfinal1 > 0 && numfinal1> 0 && numfinal2 > 0 && demfinal2  > 0  )
    {
        int a = (numfinal1 * demfinal2)+(demfinal1 * numfinal2);
        int b = (demfinal2 * demfinal1);
        //reduccion
        for(int i=2;i<19;i++){
            while(a%i==0 && b%i==0)
            {
                a=a/i;
                b=b/i;
            }
        
        }
        string strA = to_string(a);
        string strB = to_string(b);

        string final = strA + '/' + strB;

        return final;



    }else{
        string final2 = "No se puede (Numerador o Denominador NEGATIVOS)";
        return final2;
        
    }


    
}

string Fraccion2::multiplicacion(double fraccion1, double fraccion2)
{
    double frac1 = fraccion1;
    double num1=1;
    double dem1=1;
    double aux = 1;
    while (!(aux==frac1))
    {
        aux=num1/dem1; 
        if(aux<frac1){
            num1++;
        }else if(aux>frac1){
            num1--;
            dem1++;
        } 
        /* code */
    }

    double frac2 = fraccion2;
    double num2=1;
    double dem2=1;
    double aux2 = 1;
    while (!(aux2==frac2))
    {
        aux2=num2/dem2; 
        if(aux2<frac2){
            num2++;
        }else if(aux2>frac2){
            num2--;
            dem2++;
        } 
        /* code */
    }
    int numfinal1 = (int)num1;
    int demfinal1 = (int)dem1;
    int numfinal2 = (int)num2;
    int demfinal2 = (int)dem2;

    if(demfinal1 > 0 && numfinal1> 0 && numfinal2 > 0 && demfinal2  > 0  )
    {
        int a = (numfinal1 *  numfinal2);
        int b = (demfinal1  * demfinal2);
        //reduccion
        for(int i=2;i<19;i++){
            while(a%i==0 && b%i==0)
            {
                a=a/i;
                b=b/i;
            }
        
        }
        string strA = to_string(a);
        string strB = to_string(b);

        string final = strA + '/' + strB;

        return final;



    }else{
        string final2 = "No se puede (Numerador o Denominador NEGATIVOS)";
        return final2;
        
    }

    
}
#endif