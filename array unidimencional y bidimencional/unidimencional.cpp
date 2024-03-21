//
//  unidimencional.cpp
//  array unidimencional y bidimencional
//
//  Created by Luis Rivas on 19/03/24.
//

#include "unidimencional.hpp"

#include <iostream>
using namespace std;


int main(){
    
    
    string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
    
    semana[3] = "Jueves";
    for (int i=0;i<7;i++){
        cout<<semana[i]<<endl;
    }
    
    
    /*
    string nombre;
    int dato;
    cout<<"ingrese dato:";
    cin>>dato;
    cin.ignore();
    cout<<"Ingrese Nombre Completo:";
    getline(cin,nombre);
    
    cout<<nombre<<endl;
    
    
    int tam=0,suma=0,promedio=0;
    
    int notas[tam];
    char res;
    do{
        tam++;
        cout<<"ingrese nota "<<tam<<":";
        cin>>notas[tam-1];
        cout<<"desea ingresar otra nota(s/n):";
        cin>>res;
        
    }while(res=='s'||res=='S');
    
    for(int i=0;i<tam;i++){
        suma+=notas[i];
    }
    promedio = suma /tam;
    cout<<"El promedio es:"<<promedio<<endl;

    int notas[4]; //={80,65,60,70};
   
    cout<<"cuantas notas desea ingresar:";
    cin>>tam;
    
    int notas[tam];
    for(int i=0;i<tam;i++){
        
        cout<<"Ingrese nota:"<<i<<":";
        cin>>notas[i];
    }
    
    notas[0]= 80;
    notas[1]= 60;
    notas[2]= 65;
    notas[3]= 70;


    cout<<notas[0]<<endl;
    cout<<notas[1]<<endl;
    cout<<notas[2]<<endl;
    cout<<notas[3]<<endl;

    for(int i=0;i<tam;i++) {
        suma += notas[i];
    }
    promedio = suma / tam;
    
    cout<<"el promedio es:"<<endl;
        cout<<i<<":"<<notas[i]<<endl;
    }
    for(int i : notas){
        cout<<i<<endl;
    }



    notas[2] = 75;

    //cout<<"valor modificado (2)"<<notas[2]<<endl;

    */

    return 0;
}
