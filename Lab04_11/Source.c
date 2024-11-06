#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define DLUGOSC 5

int main() {

	//zad 1 i zad 2

	/*int tab[10];
	int k = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = k;
		k += 3;
		if ((i + 1) % 2 == 1)
			printf("%d\t", tab[i]);
	
	}*/
	



	//zad 3
	/*printf("Podaj a: ");
	int a = 0;
	scanf_s("%d", &a);

	int tab[DLUGOSC];
	int tmp = 0;
	for (int i = DLUGOSC-1; i >= 0; i--)
	{
		tab[i] = a - tmp;
		tmp += 5;
		printf("%d\t", tab[i]);
	}*/

	//zad 4
	//int tabLos[5];//5 to n jak coœ
	//srand(time(NULL));
	//int min = 0;


	//for (int i = 0; i < 5; i++) { 
	//	int tmp = rand() % 73-23; 
	//	if (i == 0 || min > tmp)
	//		min = tmp;
	//	printf("%d\t", tmp);
	//}
	//printf("\nNajmniejsza wartosc: %d", min);
	//
	
	//zad 5

	/*int tab[10];

	printf("Podaj [0] element w tablicy: ");
	scanf_s("%d", &tab[0]);
	
	printf("Podaj [1] element w tablicy: ");
	scanf_s("%d", &tab[1]);
	
	for (int i = 1; i < 10-1; i++)
	{
		tab[i + 1] = tab[i] + tab[i - 1];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", tab[i]);
	}*/

	//zad 6

	/*int tab[20] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		tab[i + 10] = tab[i];
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d\t",tab[i]);
	}
	*/

	//zad 7

	/*int macierz[3][3] = { 1,1,1,2,2,2,3,3,3 };
	int suma = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
				suma += macierz[i][j];

			printf("%d \t",macierz[i][j]);
		}
		printf("\n");
	}

	printf("\nSuma przekatnej: %d", suma);*/

	//zad 8

	int macierz1[3][3] = { 1,1,1,2,2,2,3,3,3 };
	int macierz2[3][3] = { 4,4,4,5,5,5,6,6,6 };

	int macierzSuma[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			macierzSuma[i][j] = macierz1[i][j] + macierz2[i][j];
		}
	}

	printf("\nMacierz nr. 1:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t",macierz1[i][j]);
		}
		printf("\n");
	}

	printf("\nMacierz nr. 2:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", macierz2[i][j]);
		}
		printf("\n");
	}

	printf("\nMacierze po dodaniu:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", macierzSuma[i][j]);
		}
		printf("\n");
	}



	return 0;
}