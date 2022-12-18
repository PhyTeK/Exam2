/*

Uppgift 2
---------

Skriv ett program som heter "u2" som skriver ut alla ojämna tal från 1
till och med 31 med hälp av en loop.

OUTPUT

1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31


Kompileras med gcc -o u2 u2.c

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i;  // Index inside for loop
  
  for(i=1;i<32;i++)
    if( i%2 != 0)
      printf("%d ",i); 
  
  //puts("");
  
  return 0;
}

