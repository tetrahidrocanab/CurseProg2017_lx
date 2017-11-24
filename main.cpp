/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: alex
 *
 * Created on 14 de noviembre de 2017, 10:19
 */

#include <stdio.h>

int romanos (char *numero){
    
   int m, c, d, u; //doy nombre a cada una de las variables
   char*millares[4]= {"","M", "MM", "MMM"};//todos los millares
   char*centenas[10]={"","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};//todas las centenas
   char*decenas[10]={"","X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};// todas las decenas
   char*unidades[10]={"","I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};// todas las unidades
   printf ("Introduce numero entre 0 y 3000 \n");// introducimos numeros entre 0 y 3000 para que los acepte y ejecute
   scanf ("%i",);//escanea el numero para que sea entero
   
   
   
   if ((numero <= 0) && (numero > 3000)){// si el numero no esta comprendido entre 0 y 3000 no es valido
      printf ("Numero no valido");
  } else{ 
       if (numero>=1000){
           m= numero/1000;
           numero= numero-m*1000;
        }  
        if (numero>=100){   
            c=numero/100;
            numero=numero-c*100;
            
        }
        if (numero>=10){
           d=numero/10;
           numero=numero-d*10;
          
        }
        
     if (numero>10){
           u=numero;
       
	   }
           
         
     }
   
printf ("Resultado  %s%s%s%s", millares[m], centenas[c], decenas[d], unidades[u]);// caracteres impresos en numeros romanos   
   
  }
   
   
   

