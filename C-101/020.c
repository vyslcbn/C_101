//coded by vyslcbn
//Project020
//Dikdortgen Alanini ve Cevresini hesaplayan program

#include <stdio.h>
#include <conio.h>

void main(){
	int kenar1, kenar2;
	float karesi, cevresi;
	
	printf("Lutfen 1. kenar degerini giriniz :");
	scanf("%d", &kenar1);
	
	printf("Lutfen 2. kenar degerini giriniz :");
	scanf("%d", &kenar2);
	
	karesi  = kenar1 * kenar2;
	cevresi = 2 * (kenar1 + kenar2);
	
	printf("\n\n Dikdortgenin alani %f ve Cevresi %f", karesi, cevresi);	
	
	getch();

}

