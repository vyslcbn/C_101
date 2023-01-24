//coded by vyslcbn
//Project037
//Haftanin günlerini diziler kullanýlarak yazan program

#include <stdio.h>

int main(){
	int day;
	char *weekdays[] = {"Pazartesi", "Sali", "Çarsamba", "Persembe", "Cuma",
	"Cumartesi","Pazar"};
	
	printf("Haftanin hangi gununu ogrenmek istiyorsunuz?(1-7) :");
	scanf("%d", &day);
	
	if(day >= 1 && day <=7){
		printf("Girilen sayiya gore haftanin %d. Gunu: %s\n", day, weekdays[day-1]);
	}
	else{
		printf("Girilen sayi 1-7 arasinda olmalidir!\n");
	}
	
	return 0;
}



