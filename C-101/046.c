//coded by vyslcbn
//Project048
//Dosyalama/ Ad Soyad Telefon No Listeleme Program�

#include <stdio.h>

FILE *dosya;

main(){
	char ad[30], soyad[30], telefon[12];
	int no[3];
	
	dosya = fopen("kisibilgi.txt","r");
	
	while(!feof(dosya)){
		fscanf(dosya,"%s %s %s %d", no, ad, soyad, telefon);
		printf("%s %s %s\n", no, ad, soyad, telefon);
	}
	fclose(dosya);
	getch();
	
}


                                                                                                                                                                                                                                                                                                                                                                                                                              
