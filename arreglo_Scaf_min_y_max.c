/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arreglo_Scaf_min_y_max.c
 * Author: Danny
 *
 * Created on 25 de noviembre de 2020, 09:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
      int x, y; 
      
     printf("\n Ingresa el valor de tu arreglo: ");
    scanf("%d", &x); 
    float arreglo[x]; 
    
      for(y=0;y<x;y++){  
        printf("\n Ingresa un valor: ");
        scanf("%f", &arreglo[y]);    
    
    } 
	
	float max=arreglo[0];
	float min = max;
	
	for(y=0;y<x;y++){ 
		if (arreglo[y]>max){ 
			max = arreglo[y];                
		} 
		if (arreglo[y]<min){ 
			min = arreglo[y]; 
			
		}
	}
	printf(" \n el valor minimo es: %f ", min); 
	printf(" \n el valor maximo es: %f", max);
    
        return (EXIT_SUCCESS);
}

