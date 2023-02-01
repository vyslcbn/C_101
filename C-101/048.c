//coded by vyslcbn
//Project048
//Dosyalama/ Ad Soyad Telefon No Silme Programi

#include <stdio.h>
FILE *dosya;
FILE *gecDos;

main(){
	dosya = fopen("kisibilgi.txt", "r");
	gecDos = fopen("gecDos.txt", "w");

int id;
int no;
char ad[30], soyad[30], telefon[12];

printf("Silmek Istediginiz Kisi Numarasini Giriniz :");
scanf("%d",&id);


while(!feof(dosya)){
	
	fscanf(dosya, "\n%d %s %s %s", &no, &ad, &soyad, &telefon); 
	if(id==no){
		
	fprintf(gecDos,"\n %d %s %s %s", no, ad, soyad, telefon);	
	} 
  
}
	fclose(dosya);
	fclose(gecDos);
	remove("kisibilgi.txt");
	rename("gecDos.txt","kisibilgi.txt");
	getch();

}


