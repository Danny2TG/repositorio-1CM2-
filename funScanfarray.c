/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funScanfarray.c
 * Author: Danny
 *
 * Created on 23 de noviembre de 2020, 09:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    int x;  
     printf("ingrese por favor el numero de \n conjuntos de su  variable: \n ");
    scanf("%d", &x);
    int arreglo[x]; 
    int y;
    
     for (int y; y<x; y++){ 
     printf("ingrese por favor un valor: \n "); 
     int z;
     scanf("%d", &z); 
     z = arreglo[y];
    
     } 
    for (int y; y<x; y++) { 
        int z;
       z = arreglo[y]; 
       printf("%d\n", z);
    } 

    return (EXIT_SUCCESS);
}

