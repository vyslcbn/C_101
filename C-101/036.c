//coded by vyslcbn
//Project036
//Girilen kelime icerisindeki sesli harf sayýsýný bulan program

#include <stdio.h>
#include <string.h>

int main(){
	char kelime [50] ;
	int sesliHarfSayisi =0;
	int i;
	
	printf("Kelime Giriniz :");
	scanf("%s", &kelime);
	
	for (i = 0; i < strlen(kelime); i++){
		
		if (kelime[i] == 'a' || kelime[i] == 'e' || kelime[i] == 'i' || kelime[i] == 'o' || kelime[i] == 'u' ||
		 kelime[i] == 'A' || kelime[i] == 'E' || kelime[i] == 'I' || kelime[i] == 'O' || kelime[i] == 'U'){
		 	sesliHarfSayisi++;
		 }
	}
	printf("Girilen kelime icerisinde %d adet sesli harf vardýr", sesliHarfSayisi);
	
	return 0;
	
}



