/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Scanfaarreglo.c
 * Author: Danny
 *
 * Created on 25 de noviembre de 2020, 07:38 PM
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
    for(y=0;y<x;y++){ 
        int  z; 
        z=arreglo[y]; 
        printf("%d\n\n", z);
    }
    return (EXIT_SUCCESS);
}

