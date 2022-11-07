//coded by vyslcbn
//Project019
//Karenin alani cevresini hesaplayan program

#include <stdio.h>
#include <conio.h>

void main(){
	int kenar;
	float sonuc;
	
	printf("Lutene karenin bir kenarini giriniz :");
	scanf("%d" ,&kenar);
	
	sonuc = kenar * kenar;
	printf("\n\n Karenin Alani : %f (m) ve", sonuc);
	
	printf("\n\n Karenin Cevresi : %d (m)" , (4*(kenar)));
	getch();
	
}

