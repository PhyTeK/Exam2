/*

Uppgift 9
---------

Skriv ett program som heter "truth" som skriver ut den
sanningsvärdetabell (truth table) av följande Boolesk uttryck "U":

U = a AND (a OR b)

där a och b är två booleska variabel som kan bara vara "true" eller
"false".

Programmet "truth" ska kunna kompileras och ska skriv ut BARA
sanningsvärdetabell i tre kolumner. Kolonnerna ska vara, i ordning;
värden av a, b och uttrycket U.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum bool {false,true};

int main(){
  int i,j;
  enum bool a,b,U;
  a=true;
  b=true;
  printf("%d %d %d\n",a,b,a&(a|b));
  
  // U = a AND (a OR b)
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      printf("%d %d %d\n",i,j,i&(i|j));
  
  return 0;
}
