#include<stdio.h>

int main () {

	/*
	*
	*/

	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//
	int ergebnis=1 ,n;
	printf("\nBitte geben Sie eine Zahl ein: ");
	scanf("%d",&n);

	//
	for (int i=1; i<=n; i++) {
		ergebnis*=i;
	}
	printf("Das Produkt von 1 bis %d ist %d\n", n, ergebnis);

	//Ende
	printf("\n\n");
	return 0;
}
