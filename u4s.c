/*

Uppgift 4
---------

Skriv ett program "sum" som skriver ut summan av serien:

n+(n-1)+(n-2)+ ... + 3 + 2 + 1

där n är värdet som anger som första argument i terminal.

INPUT: sum 100

OUTPUT:

100 + 99 + 98 + ... + 3 + 2 + 1 = 5050

Kompileras med:
gcc -o sum u4.c

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
  int i,n;
  unsigned long sum=0;
  if(argc < 2)
    return 1;
  n=(int)strtol(argv[1],'\0',10);
  printf("%d + %d + %d + ... + 3 + 2 + 1 =",n,n-1,n-2);
  for(i=n;i>0;i--)
    sum += i;

  printf("%ld\n",sum);
  
  return 0;
}
