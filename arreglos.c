/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arreglos.c
 * Author: Danny
 *
 * Created on 23 de noviembre de 2020, 06:55 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    int arreglo[100]; 
    int x=0, y=1, z;
     
     arreglo[0]=2; 
     arreglo[1]=3;  
    for (x; x<=99;x++) { 
        
        arreglo[0]=arreglo[0] + arreglo[1]; 
        printf ("%d\n", arreglo[0]);
               arreglo[1]=arreglo[0] + arreglo[1]; 
                printf ("%d\n", arreglo[1]); 
    }
    
    return (EXIT_SUCCESS);
}

