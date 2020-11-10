/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Precedencia de operadores.c
 * Author: Danny
 *
 * Created on 9 de noviembre de 2020, 09:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
    float resul = 0.0;  
    float resul2 = 3.0; 
    float resul3 = 29.0;
    
    resul = (6.18/5.0 * ((14.1-4.0)/2.0*(14.1-4.0)/2.0)); 
    resul2 = ((8.9*34.0)/17.0);
    resul3 = (8-7);        
    printf("El resultado es %f\n", resul); 
    printf("el otro resultado es %f\n", resul2); 
    printf("el ultimo resultado es %f\n", resul3);

    return (EXIT_SUCCESS);
}

