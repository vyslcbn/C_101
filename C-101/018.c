//coded by vyslcbn
//Project018
//iki sayinin toplamini hesaplayan program

#include <stdio.h>
#include <conio.h>

void main(void){
	
	int num1 = 0;
	int num2 = 0;
	int top =0;
		
	printf("\n Iki Sayi Giriniz...");
	printf("\n ___________________");
	
	printf("\n Ilk Sayi: ");
	scanf("%i" ,&num1);
	
	printf("\n Ikinci Sayi: ");
	scanf("%i" ,&num2);
	
	top = num1 + num2;
	printf("\n\n %d + %d = %d eder." ,num1, num2, top);
	
	getch();
		
}

