//coded by vyslcbn
//Project035
//Girilen kelimenin karakter sayisini hesaplayan program

#include <stdio.h>
#include <string.h>

int main(){
	char kelime[50];
	
	printf("Lutfen kelimeyi giriniz :");
	scanf("%s", &kelime);
	
	int karakterSayisi = strlen(kelime);
	
	printf("Girilen kelime %d karkter uzunlugunda.", karakterSayisi);
	
	return 0;
}



