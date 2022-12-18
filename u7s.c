/*

Uppgift 7
---------

Skriv ett program som heter "average" som declarerar och sedan
definierar fyra variabler x, y, z och avg av typ double.

Tilldela värden till x=1.23456, y=-3.14159 och z=1.90703.

Beräkna medelvärdet av x, y och z och tilldela det till variabeln
"avg".

Slutligen, skriv ut på skärmen medelvärdet som följande: Notera att
--.----- innebär två decimaler före punkten och 5 decimaler efter
punkten.

OUTPUT

The average of x, y and z is: --.-----

*/

#include <stdio.h>

void main(){
  double x=1.23456, y=-3.14159, z=1.90703;
  printf("The average of x, y and z is: 0%2.5f\n",(x+y+z)/3);
  
}
