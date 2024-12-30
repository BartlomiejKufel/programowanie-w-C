#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

	//char str1[] = "ala1";
	//char str2[] = "ala";

	//int result = strcmp(str1,str2);

	//if (result == 0)
	//	printf("napisy sa rowne");
	//else if (result < 0)
	//	printf("Pierwszy napis jest mniejszy");
	//else
	//	printf("Pierwszy napis jest wiekszy");


	//size_t dlugosc = strlen(str1);
	//printf("\nDlugosc napisu: %lu", dlugosc);

	//char str3[50];
	//scanf_s("%49s", str3); //jeœli pobierasz wartosc dla tablicy char to zawsze jeden mniej ustaw
	//gets(str3); //lepiej nie u¿ywaæ tego bo mo¿na wyjsc za limit tablicy, !!NIEBEZPIECZNE!!
	//fgets(str3, sizeof(str3), stdin); //najlepiej u¿yæ tego

	//printf("Wprowadzony napis: %s", str3);



	//zad 1

	/*char str1[50] = "cos w ktos";
	char str2[20];

	strcpy(str2, "bo cos w ktos");
	printf("Skopiowany tekst: %s \n", str2);

	strcat(str1, str2);
	printf("Polaczony tekst: %s \n", str1);


	size_t dlugosc = strlen(str1);
	printf("Dlugosc napisu: %lu\n", dlugosc);*/

	
	//zad 2

	/*char znakiMale[] = "abcdefghijklmnoprstuwxyz";
	char znakiDuze[] = "ABCDEFGHIJKLMNOPRSTUWXYZ";
	char liczby[] = "0123456789";

	for (int i = 0; i < 10; i++)
	{
		printf("\n%c w ASCII to: %d", liczby[i], liczby[i]);
	}
	for (int i = 0; i < 24; i++)
	{
		printf("\n%c w ASCII to: %d", znakiMale[i], znakiMale[i]);
	}
	for (int i = 0; i < 24; i++)
	{
		printf("\n%c w ASCII to: %d", znakiDuze[i], znakiDuze[i]);
	}*/

	//zad 3

	//char str1[50];
	//printf("podaj tekst: ");
	//fgets(str1, sizeof(str1), stdin);

	//int liczSam = 0;
	//int liczSpo = 0;
	//char samogloski[] = "aeiouy";

	//for (int i = 0; i < strlen(str1); i++)
	//{
	//	if (str1[i] == " ")
	//		continue;

	//	bool tmp = true;

	//	for (int j = 0; j < 6; j++)
	//	{
	//		if (str1[i] == samogloski[j]) {
	//			liczSam++;
	//			tmp = false;
	//			break;
	//		}
	//	}
	//	if (!tmp)
	//		liczSpo++;
	//}	

	//printf("Liczba spolglosek: %d,\tLiczba samoglosek: %d", liczSpo, liczSam);
	//return 0;


	//zad 4
	/*char tekst[30];

	fgets(tekst, sizeof(tekst), stdin);
	_strlwr(tekst);
	_strrev(tekst);

	printf("%s", tekst);*/

	//zad 5
	/*char liczby[10][10] = { "zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
	char tekst[10];
	printf("Podaj liczbe: ");
	fgets(tekst, sizeof(tekst), stdin);

	for (int i = 0; i < strlen(tekst); i++)
	{
		if (tekst[i] == " ")
			break;
		int tmp = tekst[i]-'0';
		printf("%s   ", liczby[tmp]);
	}*/

	char s1[27] = "abcdefghijklmnopqrstuvwxyz";
	char s2[27] = "zyxwvutsrqponmlkjihgfedcba";
	
	char tekst[20];
	printf("Podaj liczbe: ");
	fgets(tekst, sizeof(tekst), stdin);

	for (int i = 0; i < strlen(tekst); i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (tekst[i] == s1[j]) {
				tekst[i] = s2[j];
				break;
			}
		}
	}

	printf("%s", tekst);
}