/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>

int nif (char *numero)
{
    int dni, indiceLetra; //damos nombre a las variables dni e indiceLetra
    dni= atoi(numero);

    int calculo_dni;//nombramos variable de calculo_dni
    char letra_dni[24]= {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E', 'O'};
   // los 24 caracteres que queremos averiguar
    
    
        
    printf("\nTu DNI es: %i \n", dni);
    
    calculo_dni= dni / 23;
    calculo_dni= calculo_dni*23;
    calculo_dni= dni - calculo_dni;
    
    printf("\nEl resultado es: %i \n", calculo_dni);
    
    indiceLetra = calculo_dni;//si indiceLetra es igual que calculo_dni entonces nos calcula la letra del dni
    
    printf("\nTu letra es: la %c \n", letra_dni [indiceLetra]);// aqui imprime la letra del dni gracias a la variable declarada anteriormente
    
    return 0;
}
