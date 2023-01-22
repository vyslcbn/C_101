//coded by vyslcbn
//Project031
//Girilen 10 sayidan en buyuk ve en kucuk sayilari bulan program

#include <stdio.h>

int main(){
	int sayilar, i;
	int en_buyuk = 0, en_kucuk = 999999;
	
	printf("Lutfen 10 sayi giriniz :\n");
	
	for(i=0; i<10; i++){
		scanf("%d",&sayilar);
		
		if (sayilar > en_buyuk){
			en_buyuk = sayilar;
		}
		
		if (sayilar < en_kucuk){
			en_kucuk = sayilar;
		}
	}
	
	printf("En Buyuk Sayi : %d\n",en_buyuk);
	printf("En Kucuk Sayi : %d\n",en_kucuk);
	
	return 0;
}





