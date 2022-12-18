/*

Uppgift 5
---------

Skriv ett program som heter "bank" som innehåler följande struktur "Bank".

struct Bank{
	char name[20];
	int id;
	float account;
	float input;
	float output;
}

Initialisera strukturen "Bank" med följande in data:

Dennis 1024 120000.0  5000.0 -2500.0
Richie 2048  95000.3  2500.5 -1220.0

Skriv ut name, id, account, input, output och balance
(balance=account+input+output) på skärmen som följande: (respektera
avståndet mellan kolumnerna och horisontella raden ---)

OUTPUT

Name     id     account     input    output    balance
------------------------------------------------------- 
Dennis   1024   120000.0    5000.0   -2500.0   122500.0
Richie   2048    95000.3    2500.5   -1220.0    96280.8

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Bank{
  char name[20];
  int id;
  float account;
  float input;
  float output;
};


int main(){
  struct Bank s1={"Dennis",1024,120000.0,5000.0,-2500.0};
  struct Bank s2={"Richie",2048,95000.3,2500.5,-1220.0};

  /*
Name     id     account     input    output    balance
------------------------------------------------------- 
Dennis   1024   120000.0    5000.0   -2500.0   122500.0
Richie   2048    95000.3    2500.5   -1220.0    96280.8
  */

  
  printf("Name     id     account     input    output    balance\n");
  printf("-------------------------------------------------------\n");
  printf("%s   %d   %.1f   %.1f   %.1f    %.1f\n",s1.name,s1.id,s1.account,s1.input,s1.output,s1.account+s1.input+s1.output);
  printf("%s   %d    %.1f   %.1f   %.1f     %.1f\n",s2.name,s2.id,s2.account,s2.input,s2.output,s2.account+s2.input+s2.output);

  

  return 0;
}
