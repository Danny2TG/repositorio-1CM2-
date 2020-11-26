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
    
      int x, y; 
      
    printf("\n Ingresa la cantidad de elemetos en tu arreglo: ");
    scanf("%d", &x); 
    float arreglo[x]; 
    
      for(y=0;y<x;y++){ 
        printf("\n Ingresa un valor: ");
        scanf("%f", &arreglo[y]); 
        
    
    } 
    float division=0, rem=0;
    for(y=0;y<x;y++){  
        rem=rem+arreglo[y];
        division = rem/x;
        printf("%f\n\n", arreglo[y]);  
         
      
    }  
    
      printf("  \n\n El promedio del arreglo es: %f", division);

    return (EXIT_SUCCESS);
}

