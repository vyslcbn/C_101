//coded by vyslcbn
//Project041
//Kullanýcýdan alýnan bir tam sayýnýn 0'dan büyük veya küçük olduðunu bulan program 


#include <stdio.h>

main(){
	int num;
	
	printf("Sayiyi Giriniz :");
	scanf("%d",&num);
	
	if(num > 0){
		printf("Girdiginiz sayi Sifirdan buyuk bir sayidir.");
	}
	else if(num < 0){
		printf("Girdiginiz sayi Sifirdan kucuk bir sayidir");
	}
	else {
		printf("Girdiginiz Sayi Sifir");
	}
	
	return 0;

}




