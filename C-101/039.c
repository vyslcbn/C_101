//coded by vyslcbn
//Project039
//Kullanýcýdan alýnan bir ondalýklý sayýnýn karesini alýp ekrana yazdýran bir program 


#include <stdio.h>
#include <math.h>

main(){
	double num, karesi;
	
	printf("Ondalikli sayiyi giriniz :");
	scanf("%lf",&num);
	
	karesi = num*num;
	
	printf("Girdiginiz sayinin karesi : %lf", karesi);
	
	return 0;
	
}




