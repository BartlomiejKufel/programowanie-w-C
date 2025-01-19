#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE* inFp;

void Zad4() {
	char inFileName[]="dane1.txt";
	int pesele[1000];
	int	t = 0;

	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n!!! Plik nie istnieje !!!\n", inFileName);
		exit(1);
	}

	while (fscanf(inFp, "%d", &pesele[t]) == 1) {
		t++;
	}

	
	//zad 4.1
	/*int liczbam = 0, liczbak = 0; 

	for (int i = 0; i < 1000; i++)
	{
		int dziesiatka = (pesele[i] / 10) % 10;
		if (dziesiatka % 2 == 0)
			liczbak++;
		else
			liczbam++;

	}

	printf("liczba kobiet: %d\nliczba mezczyzn: %d\n ", liczbak, liczbam);*/

	/*
	//zad 4.2
	int listopad = 0, trzeciaCyfra=0, czwartaCyfra=0;
	for (int i = 0; i < 1000; i++)
	{
		trzeciaCyfra = (pesele[i] / 100000000) % 10;
		czwartaCyfra = (pesele[i] / 10000000) % 10;
		if (abs(trzeciaCyfra) == 1 && abs(czwartaCyfra == 1))
			listopad++;

		if (abs(trzeciaCyfra) == 3 && abs(czwartaCyfra) == 1)
			listopad++;
	}
	printf("Liczba osob urodzonych w listopadzie: %d\n ", listopad);*/

	//zad 4.3
	int suma = 0;
	int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};

	for (int i = 0; i < 1; i++)
	{
		if (suma % 10 != 0)
			printf("%d\n", pesele[i]);
	}

	fclose(inFp);

	return 0;
}