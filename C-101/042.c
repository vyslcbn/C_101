//coded by vyslcbn
//Project042
//Dosya Acma

/*
"r" (Read-only): Dosya sadece okunabilir. Dosya mevcut deðilse "fopen" fonksiyonu "NULL" deðerini döndürür.
"w" (Write-only): Dosya sadece yazýlabilir. Dosya mevcut deðilse, "fopen" fonksiyonu yeni bir dosya oluþturur. Dosya mevcutsa, içeriði silinir.
"a" (Append-only): Dosya sadece yazýlabilir. Dosya mevcut deðilse, "fopen" fonksiyonu yeni bir dosya oluþturur. Dosya mevcutsa, içeriði silinmez ve yeni veriler dosyanýn sonuna eklenir.
"r+" (Read and Write): Dosya hem okunabilir hem de yazýlabilir. Dosya mevcut deðilse, "fopen" fonksiyonu "NULL" deðerini döndürür.
"w+" (Read and Write): Dosya hem okunabilir hem de yazýlabilir. Dosya mevcut deðilse, "fopen" fonksiyonu yeni bir dosya oluþturur. Dosya mevcutsa, içeriði silinir.
"a+" (Read and Append): Dosya hem okunabilir hem de yazýlabilir. Dosya mevcut deðilse, "fopen" fonksiyonu yeni bir dosya oluþturur. Dosya mevcutsa, içeriði silinmez ve yeni veriler dosyanýn sonuna eklenir.
*/

#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("example.txt","a");
	
	//Dosya islemleri burada gerceklesir
	
	//Dosya Kapatma
	fclose(fp);
	return 0;
}

