/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Danny
 *
 * Created on 1 de diciembre de 2020, 02:24 PM
 */

#include <stdio.h>
#include <stdlib.h> 
#include<math.h> 

void verificar(int op);
void conversionCaF (); 
void conversionCaK (); 
void conversionFaC (); 
void conversionFaK ();
void conversionKaC (); 
void conversionKaF ();




int main(int argc, char** argv) {
    int op; 
    float C, F, K;
    
   do
    {   
        system ("cmd /c cls");
        printf( "\n Conversion de temperaturas");
        printf( "\n   1. Calcular grados Celsius a Fahrenheit" );
        printf( "\n   2. Calcular grados Celsius a Kelvin." );
        printf( "\n   3. Calcular grados Fahrenheit a Celsius." ); 
        printf( "\n   4. Calcular grados Fahrenheit a Kelvin." ); 
        printf( "\n   5. Calcular grados Kelvin a Celsius." ); 
        printf( "\n   6. Calcular grados Kelvin a Fahrenheit." );
        printf( "\n   7. Salir." );
        printf( "\n\n   Introduzca opcicn (1-7): ");

        scanf( "%d", &op);
        verificar(op);
    } while ( op != 7 );
   
    return (EXIT_SUCCESS);
}

 void verificar(int op) { 
     switch (op){ 
         case 1: {
                    conversionCaF ();
                    break;
         }
            case 2: {
                    conversionCaK ();
                    break;
            }
            case 3: {
                    conversionFaC ();
                    break;
            }
            case 4: {
                   conversionFaK ();
                    break;
            }
            case 5:  {
                    conversionKaC ();
                    break;
            }
            case 6: {
                    conversionKaF ();
                    break;
            }
            case 7: {
                    system ("cmd /c cls");
                    printf( "\n   Hasta la proximaaaa ");
                    break;
            }
     }
 

 }
 
void conversionCaF (){  
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float C = 0;
    scanf( "%f", &C ); 
    float F = C*  1.8f + 32; 
    printf( "\n  Equivalen a: %f\n\n", F ); 
    
} 
void conversionCaK(){  
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float C = 0;
    scanf( "%f", &C ); 
    float K = C + 273;
    printf( "\n  Equivalen a: %f\n\n", K ); 
     
} 
void conversionFaC(){ 
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float F = 0; 
    scanf( "%f", &F ); 
    float C = F*  1.8f - 32; 
    printf( "\n  Equivalen a: %f\n\n", C ); 
     
} 
void conversionFaK(){  
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float F = 0; 
    scanf( "%f", &F ); 
    float K = F *  1.8f - 32 + 273;  
    printf( "\n  Equivalen a: %f\n\n", K ); 
    
} 
void conversionKaC(){ 
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float K = 0;
    scanf( "%f", &K ); 
    float C = K - 273;  
    printf( "\n  Equivalen a: %f\n\n", C ); 
     
} 
void conversionKaF(){ 
    system ("cmd /c cls");
    printf( "\n   Introduzca los grados Celsius: "); 
    float K = 0; 
    scanf( "%f", &K ); 
    float F = K *  1.8f + 32 - 273;  
    printf( "\n  Equivalen a: %f\n\n", F ); 
     
} 