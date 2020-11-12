/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablas_de_multiplicar.c
 * Author: Danny
 *
 * Created on 12 de noviembre de 2020, 01:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {  
    
    int a = 1, b = 1, top= 10; 
    
    while (a <= top)  { 
        printf("\n tabla de %d\n", a); 
        while (b<=top) { 
            printf("%d * %d =%d\n", b,a, b * a); 
            
            b++;
        } 
        a++; 
        b=1; 
            printf("\n")   ; 
    }

    return (EXIT_SUCCESS);
}

