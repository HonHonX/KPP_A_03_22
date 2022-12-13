#include<stdio.h>

int main () {

	/*
	* Liest eine Zahl n ein und gibt n! aus
	*/

	printf("\n ********************************* ");
	printf("\n *   ^,,,,^   *                  * ");
	printf("\n *  ( o x o)  * Fakultät-Rechner * ");
	printf("\n *  ( 7   7)  *                  * ");
	printf("\n *   ´´´´´´   *          ©S.Buch * ");
	printf("\n ********************************* \n\n");
	
	//Einlesen des Werts für n
	int ergebnis=1 ,n;
	printf("\nBitte geben Sie eine Zahl ein: ");
	scanf("%d",&n);

	//Berechnung
	for (int i=1; i<=n; i++) {
		ergebnis*=i;
	}
		
	//Ausgabe
	printf("Das Produkt aller Zahlen zwischen 1 und %d ist %d\n", n, ergebnis);

	//Ende
	printf("\n\n");
	return 0;
}
