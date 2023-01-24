//coded by vyslcbn
//Project040
//Kullanýcýdan alýnan bir tam sayýnýn pozitif mi negatif mi olduðunu belirleyen program 


#include <stdio.h>
main(){
	int num;
	
	printf("Sayiyi Giriniz :");
	scanf("%d",&num);
	
	if(num > 0){
		printf("Girdiginiz sayi Pozitif bir sayidir.");
	}
	else if(num < 0){
		printf("Girdiginiz sayi Negatif bir sayidir");
	}
	else {
		printf("Girdiginiz Sayi Sifir");
	}
	
	return 0;

}




