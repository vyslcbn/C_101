//coded by vyslcbn
//Project032
//vucut kitle endeksini hesaplayan program

#include <stdio.h>

float vkiHesapla(float boy, float kilo){
	return  kilo / (boy * boy);
}

int main(){
	float boy, kilo;
	
	printf("Lutfen boyunuzu metre cinsinde giriniz :");
	scanf("%f", &boy);
	
	printf("Lutfen kilonuzu giriniz :");
	scanf("%f", &kilo);
	
	float vki = vkiHesapla(boy, kilo);
	printf("Vucut kitle indeksiniz :%.2f", vki);
	
	if(vki < 18.5){
		printf("\nZayifsiniz");
	}
	else if(vki >=18.5 && vki < 25){
		printf("\nNormal kilolusunuz");
	} 
	else if(vki >=25 && vki < 30){
		printf("\nFazla Kilolusunuz ");
	}
	else{
		printf("\nObezsiniz");
	}
	
	return 0;
}



