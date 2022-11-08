//coded by vyslcbn
//Project025
//Oy Kullanabilmeyi Tespit Eden Program (yas)

#include <stdio.h>
#include <conio.h>

void main(){
	int yas = 0;
	
	printf("\n Secmen Yasi Giriniz :");
	scanf("%d", &yas);
	
	if(yas >= 18)
	printf("\nSecimlerde OY Kullanabilir");
	
	else if(yas < 18)
	printf("\nSecimlerde OY Kullanamaz");
	
	getch();
}

