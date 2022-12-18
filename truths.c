#include <stdio.h>

void main(){

  int a,b;
  for (a=0;a<2;a++)
    for (b=0;b<2;b++)
      printf("%d %d %d\n",a,b,a&(a|b));


}
