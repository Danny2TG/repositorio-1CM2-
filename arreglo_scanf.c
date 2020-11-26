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
    int n; 
    int  i;  
     printf("\n Ingresa el valor de tu arreglo: ");
    scanf("%d", &n); 
    float arreglo[n]; 
    
      for(i=0;i<n;i++){ 
        int  num; 
        printf("\n Ingresa un valor: ");
        scanf("%d", &num); 
        arreglo[i]=num;
    
    } 
    for(i=0;i<n;i++){ 
        int  num; 
        num=arreglo[i]; 
        printf("%d\n", num);
    }
    return (EXIT_SUCCESS);
}

