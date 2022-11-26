//coded by vyslcbn
//Project026
//Haftanin Gunlerini Numaralandiran Program

#include <stdio.h>
#include <conio.h>

int main(){
	
	int gun = 0;
	
	printf("Haftanin Gunlerini Numaralandiran Program");
	printf("\n_______________________________________");
	
	printf("\n Lutfen Gun Numarasini Giriniz :");
	scanf("%d", &gun);
	
	if(gun == 1)
	printf("\n Pazartesi");
	
	else if(gun == 2)
	printf("\n Sali");
		
	else if(gun == 3)
	printf("\n Carsamba");
		
	else if(gun == 4)
	printf("\n Persembe");
		
	else if(gun == 5)
	printf("\n Cuma");
		
	else if(gun == 6)
	printf("\n Cumartesi");
		
	else if(gun == 7)
	printf("\n Pazar");
	
	else
	printf("Gecersiz bir deger girdiniz.");
	
	getch();
	
	}


