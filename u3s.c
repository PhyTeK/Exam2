/*

Uppgift 3
---------

Om i=-2 och j=-1, vad är värden av variabeln j efter följande rad?

j -= ++i + ++i + j;

Skriv ditt resultat i en fil som heter "u3".

Du behöver inte kompilera koden.

I filen "u3" ska det står BARA en siffra!

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i=-2,j=-11;
  int h,k;
  j -= ++i + ++i + j;
  i=-2;
  k = (++i + ++i + ++i);
  
  // före att du titta på i tillämpa ++ operatorer, i = (-2 +1 )+1) = 0 
  i=-2;
  h = (i+1) + (i+1);
  printf("%d\n",j);
  printf("k=%d h=%d\n",k,h);

  return 0;
}

