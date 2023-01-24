//coded by vyslcbn
//Project027
//Bir sayının faktöriyelini bulan program

#include <stdio.h>


int main (){

	int i, sayi, faktoriyel = 1;
	
	printf("Lutfen Faktoriyelini bulmak istediginiz sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	for(i = 1; i <= sayi; i++){
		faktoriyel = faktoriyel * i;
	}
	
	printf("%d! = %d\n", sayi, faktoriyel);
	return 0;
}

