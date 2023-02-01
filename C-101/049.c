//coded by vyslcbn
//Project049
//Dosyalama/ Ad Soyad Telefon No Degistirme Programi

#include <stdio.h>
FILE *anaDos;
FILE *gecDos;

main(){
	dosya = fopen("kisibilgi.txt", "r");
	gecDos = fopen("gecDos.txt", "w");

int id;
int no;
char ad[30], soyad[30], telefon[12];

int yno;
char yad[30], ysoyad[30], ytelefon[12];

printf("Degistirmek Istediginiz Kisi numarasini giriniz :");
scanf("%d",&id);

printf("Lutfen Yeni Numarayý Giriniz :");
scanf("%d",&yno);
printf("Lutfen Yeni Ad Giriniz :");
scanf("%s",&yad);
printf("Lutfen Yeni Soyad Giriniz :");
scanf("%s",&ysoyad);
printf("Lutfen Yeni Telefon Giriniz :");
scanf("%s",&ytelefon);



while(!feof(dosya)){
	
	fscanf(dosya, "\n%d %s %s %s", &no, &ad, &soyad, &telefon); 
	if(id==no){
		
	fprintf(gecDos,"\n %d %s %s %s", yno, yad, ysoyad, ytelefon);	
	} 
  	
  	fprintf(gecDos,"\n %d %s %s %s", no, ad, soyad, telefon);
}
	fclose(dosya);
	fclose(gecDos);
	remove("kisibilgi.txt");
	rename("gecDos.txt","kisibilgi.txt");
	getch();

}



