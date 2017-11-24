/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cuenta.c
 * Author: alex
 *
 * Created on 17 de noviembre de 2017, 13:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int validar();

int main() 
{
    int eleccion; 
    char numero[20];// ejecuta desde aqui el numero y no desde nif
    
    do {
        
    
    printf("Elige una opcion: \n");
    printf("\t1.-Calcula letra NIF.\n");
    printf("\t2.-Finalizar.\n");
    printf ("\t3.-Romanos. \n");
    
    scanf ("%i", &eleccion);
    
    if (eleccion==1)//si eliges 1 ejecuta nif
    {
        printf ("Has elegido calcular DNI.\n");
        printf ("Introduce DNI\n");
        scanf ("%s", &numero);
        validar(numero);//validar numero
        
    }
    if (eleccion==2)// si eliges 2 ejecuta salida del programa
    {
        
        printf ("Has elegido la muerte \n");
    }   
        if (eleccion==3)// si eliges 3 ejecuta numeros romanos
        {
             
                      
            
        }
    }while (eleccion != 2);//si eleccion es distinto de 2 se para
    printf ("Jo puta elige otra cosa. \n");
            

            
    
}

