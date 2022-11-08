//coded by vyslcbn
//Project021
//Dairenin Alanini ve Cevresini hesaplayan program

#include <stdio.h>
#include <conio.h>

void main(){
	float yaricap;
	double alan;
	double cevre;
	
	printf("Dairenin Alani ve Cevresi");
	printf("\n______________________\n");
	
	printf("Dairenin Alani yaricapini giriniz :");
	scanf("%f", &yaricap);
	
	alan  = 3.14 * yaricap *yaricap;
	cevre = 2 * 3.14 * yaricap;
	
	printf("\n Dairenin Alani : %f", alan);
	printf("\n Dairenin Cevresi : %f", cevre);
	
	getch();
	
}


