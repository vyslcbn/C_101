//coded by vyslcbn
//Project022
//Ne kadar yasadiniz..

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	int yas = 0;
	int ay = 0;
	int hafta = 0;
	long int gun = 0;
	long int saat = 0;
	long int dakika = 0;
	long int saniye = 0;
	
	printf("Yasiniz Kac ? :");
	scanf("%i", &yas);
	
	ay =    yas * 12;
	hafta = yas * 52;
	gun =   yas * 365;
	saat =  yas * 365 * 24;
	dakika =yas * 365 * 24 * 60;
	saniye =yas * 365 * 24 * 60 * 60;
	
	printf("\n Yasiniz %i olduguna gore :", yas);
	printf("\n %d ay ", ay);
	printf("\n %d hafta ", hafta);
	printf("\n %d gun ", gun);
	printf("\n %d saat ", saat);
	printf("\n %d dakika ", dakika);
	printf("\n %d saniye ", saniye);
	printf("\n yasamissiniz");
	
	getch();
	
}


