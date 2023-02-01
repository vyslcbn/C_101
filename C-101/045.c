//coded by vyslcbn
//Project045
//Dosyalama/ Ad Soyad Telefon No Kayýt Programý

#include <stdio.h>

FILE *dosya;

main(){
	char ad [30];
	char soyad [30];
	char telefon [12];
	int no [3];
	
	dosya = fopen("kisibilgi.txt", "a");
	
	printf("Ad Girin:");
	scanf("%s",&ad);
	
	printf("Soyad Girin :");
	scanf("%s",&soyad);
	
	printf("Telefon numarasini Girin :");
	scanf("%s",&telefon);
	
	printf("No Girin :");
	scanf("%d",&no);
	
	
	fprintf(dosya,"\n %s %s %s %d",ad, soyad, telefon, no);
	
	fclose(dosya);
	
}


