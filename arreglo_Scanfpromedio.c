/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arreglo_Scanf_promedio.c
 * Author: Danny
 *
 * Created on 25 de noviembre de 2020, 08:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
      int x; 
    int  y;  
     printf("\n Ingresa el valor de tu arreglo: ");
    scanf("%d", &x); 
    float arreglo[x]; 
    
      for(y=0;y<x;y++){ 
        int  z; 
        printf("\n Ingresa un valor: ");
        scanf("%d", &z); 
        arreglo[y]=z;
    
    } 
    float division=0, rem=0;
    for(y=0;y<x;y++){ 
        int  z; 
        z=arreglo[y]; 
        rem=rem+arreglo[y];
        division = rem/x;
        printf("%d\n\n", z);  
         
      
    }  
    
      printf(" % f \n\n El promedio del arreglo es: ", division);

    return (EXIT_SUCCESS);
}

