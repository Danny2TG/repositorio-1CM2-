/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Metodo_burbuja_2.c
 * Author: Danny
 *
 * Created on 26 de noviembre de 2020, 12:30 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
     int x, y;   
     int bandera=1;
    printf("\n Ingresa la cantidad de elemetos en tu arreglo: ");
    scanf("%d", &x); 
    int arreglo[x]; 
    
    int i=0;
      for(i;i<x;i++){ 
        printf("\n Ingresa un valor: ");
        scanf("%d", &arreglo[i]);  
      }  
     
    for (i; i<x && bandera==1; i++){  
        bandera=0;
    for (int j=0; i<x; j++){ 
        if(arreglo[j]> arreglo[j+1]){  
            bandera=1;
            y=arreglo[j]; 
            arreglo[j] = arreglo[j+1]; 
            arreglo[j+1] =y;
        }
    }
    
    } 
  
     for(i=0;i<x;i++){ 
             printf("\n%d", arreglo[i]);
     }

    return (EXIT_SUCCESS);
}

