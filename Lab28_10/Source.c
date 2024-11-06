#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
	// "\t" - tabulacja  
	
	/*
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) break; //przerwij dzia³anie gdy i=5
		if (i % 2 == 0) continue; //pomiñ kod ponirzej dla parzystych i
		printf("%d\t", i);
	}
	printf("\n");

	int licznik = 1;

	while (1) {
		printf("wykonanie petli numer: %d\n", licznik);
		licznik++;

		if (licznik >= 5) break;
	}
	*/

	//zad 1
	/*float suma = 0, max = 0, min = 0, l = 0;
	int i = 0;
	while (1) {
		printf("Podaj wartosc: ");
		scanf_s("%f", &l);
		if (l < 0) {
			float sred = suma / i;
			printf("\nSuma: %.2f\nNajwieksza liczba: %.2f\nNajmniejsza liczba: %.2f\nSrednia: %.2f", suma, max, min, sred);
			break;
		}
		if (i == 0)min = l;
			
		i++;
		suma += l;
		if (l > max) max = l;
		else if (l < min) min = l;
	}*/

	//zad 2
	/*float sumD = 0, sumU = 0;
	int ilD = 0, ilU = 0;

	for (int i = 0; i < 10; i++)
	{
		float l;
		printf("Podaj liczbe:\t");
		scanf_s("%f", &l);

		if (l > 0) {
			sumD += l;
			ilD++;
		}
		else if (l < 0) {
			sumU += l;
			ilU++;
		}
	}

	printf("Suma liczb dodatnich: %.2f\n", sumD);
	printf("Ilosc liczb dodatnich: %d\n", ilD);
	printf("Suma liczb ujemnych: %.2f\n", sumU);
	printf("Ilosc liczb ujemnych: %d\n", ilU);*/

	//zad 3

	/*int suma=0, n=5;
	for (int i = 0; i < n; i++)
	{
		int l;
		printf("Podaj liczbe:\t");
		scanf_s("%d", &l);
		if (l % 2 == 0) suma += l;
	}

	printf("Suma liczb parzystych w ciagu %d liczbowym: %d", n, suma);*/


	//zad 4
	/*srand(time(NULL));

	int suma = 0, n = 5;
	for (int i = 0; i < n; i++)
	{
		int l = rand() % 56 - 10;
		if (l % 2 == 0) suma += l;
	}

	printf("Suma liczb parzystych w ciagu %d liczbowym: %d", n, suma);*/

	//zad 5

	/*float suma = 0;
	int n = 0;
	printf("Podaj liczbe studentow: ");
	scanf_s("%d", &n);

	int i = 1;
	while (i <= n) {
		float p = 0;
		printf("Podaj liczbe punktow dla studenta nr. %d: ", i);
		scanf_s("%f", &p);
		suma += p;
		i++;
	}
	float sred = suma / n;

	printf("Srednia ilosc punktow, %d studentow: %.2f", n, sred);*/

	//zad 6
	/*for (int i = 1; i <= 100; i++) {
		printf("%d, ",i);
	}
	*/
	//for (int i = 100; i >= 0; i--) {
	//	printf("%d, ", i);
	//}

	//for (int i = 7; i <= 77; i += 7) {
	//	printf("%d, ", i);
	//}
	

	/*for (int i = 20; i >= 0; i -=2) {
		printf("%d, ", i);
	}*/

	//zad 7

	/*int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("X");
		}
		printf("\n");
	}*/

	
	//orginal
	/*int i, j;
	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}*/

	/*int i, j;
	for ( i = 0; i < 10; i++)
	{
		for (int k = 9; k > i; k--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}*/


	/*int i, j;
	for (i = 0; i < 10; i++)
	{
		for (int k = 0; k < i; k++) {
			printf(" ");
		}

		for (j = 10; j > i; j--)
		{
			printf("X");
		}
		printf("\n");
	}*/

	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (int k = 9; k > i; k--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("X");
		}

		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}


	return 0;
}