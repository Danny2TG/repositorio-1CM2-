/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mayor de 3 números.c
 * Author: Danny
 *
 * Created on 9 de noviembre de 2020, 09:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
  int a = 0;
  int b = 0;
  int c = 0;
 
  printf("Introduzca el primer numero: ");
  scanf("%d", &a);
  printf (" \n\n");
 
  printf("Introduzca el segundo numero: ");
  scanf("%d", &b);
  printf (" \n\n");
 
  printf("Introduzca el tercer numero: ");
  scanf("%d", &c);
  printf (" \n\n");

  if(a > b && a > c) {
                             printf("El mayor es: %d\n\n", a);
                             printf (" \n\n\n");
                             }
                            
                             else if(b > a && b > c)
                                 {
                                 printf("El mayor es: %d\n\n", b);
                                 printf (" \n\n\n");
                                 }
                                
                                 else
                                     printf("El mayor es: %d\n\n", c);
                                     printf (" \n\n");

    return (EXIT_SUCCESS);
}

