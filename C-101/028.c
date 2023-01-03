//coded by vyslcbn
//Project028
//Bir dizinin en büyük ve en küçük elemanýný bulan program

#include <stdio.h>
#include <conio.h>

int main() {
  int dizi[100], n, en_buyuk, en_kucuk;
  int i;
  
  printf("Lutfen dizinin eleman sayisini girin:");
  scanf("%d",&n);
  
  printf("Lutfen dizinin elemanlarini girin:");
  for(i=0; i < n; i++){
  	scanf("%d", &dizi[i]);
  }
  
  en_buyuk = dizi [0];
  en_kucuk = dizi [0];
  
  for (i = 1; i < n; i++){
  	if(dizi[i] > en_buyuk){
  		en_buyuk = dizi [i];
	  }
	  if (dizi[i] < en_kucuk){
	  	en_kucuk = dizi[i];
	  }
  }
  
  printf("En buyuk eleman : %d\n", en_buyuk);
  printf("En kucuk eleman : %d\n", en_kucuk);
  
  return 0;
}

