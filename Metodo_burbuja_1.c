/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Metodo_burbuja_1.c
 * Author: Danny
 *
 * Created on 26 de noviembre de 2020, 12:13 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) { 
    
    int juegos[3] = {3,1,5}; 
    int x, y, d; 
    
    for(x=0; x<3; x++){ 
        for(y=0; y<3; y++){ 
            if(juegos[y]> juegos[y+1]){ 
                d = juegos[y+1]; 
                juegos[y+1] = juegos[y]; 
                juegos[y] = d;     
            }
        }
    }

    for(x=0; x<3; x++){
        printf("%d\n", juegos[x]);
    }
    
    return (EXIT_SUCCESS);
}

