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

float CaF(float C){ 
    return(C*1.8f)+32;
} 
float CaK(float C){ 
    return(C + 273);
} 
float FaC(float F){ 
    return(F -32) /1.8f;
} 
float FaK(float F){ 
    return(F - 32) * 1.8f + 273;
} 
float KaC(float K){ 
    return(K - 273);
} 
float KaF(float K){ 
    return(K - 273) * 1.8f + 32;
} 






int main(int argc, char** argv) {
    int op; 
    float equivalencia, C, F, K;
    
   do
    { 
        printf( "Conversion de temperaturas");
        printf( "\n   1. Calcular grados Celsius a Fahrenheit" );
        printf( "\n   2. Calcular grados Celsius a Kelvin." );
        printf( "\n   3. Calcular grados Fahrenheit a Celsius." ); 
        printf( "\n   4. Calcular grados Fahrenheit a Kelvin." ); 
        printf( "\n   5. Calcular grados Kelvin a Celsius." ); 
        printf( "\n   6. Calcular grados Kelvin a Fahrenheit." );
        printf( "\n   7. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-7): ");

        scanf( "%d", &op);

        switch ( op )
        {
            case 1: printf( "\n   Introduzca los grados Celsius: ");
                    scanf( "%f", &C ); 
                    float equivalencia = CaF(C);
                    printf( "\n  Equivalen a: %f\n\n", equivalencia );
                    break;

            case 2: printf( "\n   Introduzca los grados Celsius: " );
                    scanf( "%f", &C ); 
                    equivalencia = CaK(C); 
                    printf( "\n  Equivalen a: %f\n\n", equivalencia );
                    break;

            case 3: printf( "\n   Introduzca los grados Fahrenheit: ");
                    scanf( "%f", &F ); 
                    equivalencia = FaC(F);
                    printf( "\n   Equivalen a: %f\n\n", equivalencia ); 
                    
            case 4: printf( "\n   Introduzca los grados Fahrenheit: ");
                    scanf( "%f", &F ); 
                    equivalencia = FaK(F);
                    printf( "\n   Equivalen a: %f\n\n", equivalencia );
                    break;

            case 5: printf( "\n   Introduzca los grados Kelvin: ");
                    scanf( "%f", &K ); 
                    equivalencia = KaC(K);
                    printf( "\n  Equivalen a: %f\n\n", equivalencia);
                    break;

            case 6: printf( "\n   Introduzca los grados Kelvin: ");
                    scanf( "%f", &K ); 
                    equivalencia = KaF(K);
                    printf( "\n   Equivalen a: %f\n\n", equivalencia ); 
                    break;
                    
            case 7: printf( "\n   Hasta la proximaaaa ");
                    break;
                                     
         }

       

    } while ( op != 7 );

    
    return (EXIT_SUCCESS);
}

