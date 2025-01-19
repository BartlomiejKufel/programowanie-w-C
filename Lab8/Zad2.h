#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* inFp;
FILE* outFp;

void Zad2() {
	char inFileName[] = "dane.txt";
	char outFileName[] = "wynik.txt";

	int liczby[5], t = 0, wynik[5] = {NULL,NULL,NULL,NULL,NULL};
	

	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n!!! Ten Plik nie istnieje !!!\n");
		exit(1);
	}

	while (fscanf(inFp, "%d", &liczby[t]) == 1) {
		t++;
	}

	t = 0;

	printf("Wszystkie pobrane liczby:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", liczby[i]);
		int tmp = liczby[i] % 10;
		if (tmp == 0 || tmp == 3 || tmp == 8 || tmp == 9) {
			wynik[t] = liczby[i];
			t++;
		}
	}
	fclose(inFp);

	if ((outFp = fopen(outFileName, "w")) == NULL) {
		printf("Nie mogê otworzyæ pliku do zapisu!\n");
		exit(1);
	}

	fprintf(outFp, "%d\n%d\n%d\n%d\n%d\n", wynik[0], wynik[1], wynik[2], wynik[3], wynik[4]);
	fclose(outFp);

}