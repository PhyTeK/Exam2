/*

Uppgift 1
---------

Skriv ett program som heter "u1" som deklarerar en funktion "fun1" som
tar två heltal som argumenter och returnera summan av båda tal.

Anropa funktionen "fun1" i main funktionen och skriv ut med hjälp av en loop på skärmen
summan av varje respectiva element av två listor "list1" och "list2".

list1 = {2,4,6,8,10,12}
list2 = {1,3,5,7, 9,11}

INPUT ./u1

OUTPUT

3 7 11 15 19 23

Kompilation:
gcc -o u1 u1.c

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fun1(int,int);

int main(){
  int list1[] = {2,4,6,8,10,12};
  int list2[] = {1,3,5,7, 9,11};
  int i;
  
  for(i=0;i<6;i++)
    printf("%d ",fun1(list1[i],list2[i]));

  puts("");
  return 0;
}

int fun1(int a, int b){
  return a+b;
}
