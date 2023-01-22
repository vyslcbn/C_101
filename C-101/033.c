//coded by vyslcbn
//Project033
//Girilen iki kelimeden uzun olaný bulan program

#include <stdio.h>
#include <string.h>

main(){
	char kelime1[20], kelime2[20];
	
	printf("1. Kelimeyi Giriniz :");
	scanf("%s",&kelime1);
	
	printf("2. Kelimeyi Giriniz :");
	scanf("%s",&kelime2);
	
	if(strlen(kelime1) > strlen(kelime2)){
		printf("\n%s kelimesi en uzun kelimedir.", kelime1);
	}
	else if(strlen(kelime1) < strlen(kelime2)){
		printf("\n%s kelimesi en uzun kelimedir.", kelime2);
	}
	else{
		printf("\nÝki kelime birbirine eþittir.");
	}
	
	return 0;
	
}




