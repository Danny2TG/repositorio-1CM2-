/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablas_de_multiplicar_for.c
 * Author: Danny
 *
 * Created on 17 de noviembre de 2020, 11:55 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
     int a, b, c = 29, d = 10 ; 
    
    for (a = 1; a <= c; a++)  { 
        printf("\n tabla del %d\n", a); 
        for (b = 1; b <= d; b++)  
            printf("%d * %d =%d\n", a,b, a * b); 
        } 
        
    return (EXIT_SUCCESS);
}

