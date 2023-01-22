//coded by vyslcbn
//Project030
//Kulanicidan ad soyad biligileri alinarak tam adi girilen program

#include <stdio.h>
#include <string.h>

int main(){
	char ad[50], soyad[50];
	
	printf("Adinizi Giriniz :");
	scanf("%s", ad);
	
	printf("Soyadinizi Giriniz :");
	scanf("%s", soyad);
	
	printf("Tam Adiniz: %s %s \n", ad , soyad);
	
	return 0;
	
}


