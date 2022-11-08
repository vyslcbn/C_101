//coded by vyslcbn
//Project023
//Tek mi Cift mi

#include <stdio.h>
#include <conio.h>

void main (){
	printf("Tek mi Cift mi");
	printf("\n_________________\n");
	
	int sayi = 0;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi % 2 == 0)
		printf("Cift Sayi");
	else
		printf("Tek Sayi");
		
	getch();			
	
}
