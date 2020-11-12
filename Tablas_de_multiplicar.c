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
    
    int a = 2, b = 1; 
    
    while (a <= 10)  { 
        printf ("%d\n tabla de ", a); 
        while (b<=10) { 
            printf ("%d\n" b * a); 
            
            b+1;
        } 
        a+1; 
        b=a; 
    }

    return (EXIT_SUCCESS);
}

