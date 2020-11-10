/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Serie Fibonacci.c
 * Author: Danny
 *
 * Created on 9 de noviembre de 2020, 09:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    int  X = 0, Y = 1, Z, num, A = 1; 
 printf("Ingrese el numero: ");
 scanf("%d", &num); 
 
 while (A<=num) { 
     X=Y; 
     Y=Z; 
     Z = X+Y; 
     A++;
printf("%d\n", Z);     
 }

    return (EXIT_SUCCESS);
}

