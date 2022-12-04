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
(balance=account+input-output) på skärmen som följande: (respektera
avståndet mellan kolumnerna och horisontella raden ---)

OUTPUT

Name     id     account     input    output    balance
------------------------------------------------------- 
Dennis   1024   120000.0    5000.0   -2500.0   122500.0
Richie   2048    95000.3    2500.5   -1220.0    96280.8

*/