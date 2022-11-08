//coded by vyslcbn
//Project024
//Buyuk sayiyi bulan program

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	int sayi1 = 0;
	int sayi2 = 0;
	
	printf("Birici Sayiyi Giriniz :");
	scanf("%i", &sayi1);
	
	printf("\nIkinci Sayiyi Giriniz :");
	scanf("%i", &sayi2);
	
	if(sayi1 > sayi2)
	printf("\nEn buyuk sayi : %i ", sayi1);
	
	else if(sayi2 > sayi1)
	printf("\nEn Buyuk sayi : %i:", sayi2);
	
	else if (sayi1 == sayi2)
	printf("\nSayilar Esit");
	
	getch();
}

