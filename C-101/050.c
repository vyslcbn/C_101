//coded by vyslcbn
//Project050
//Menulu Dosyalama Islemi Yapan Program


#include <stdio.h>
FILE *anaDos;
FILE *gecDos;


main()
{
	int sec;
	int no;
	int id;
	char ad[23];
	char soyad[23];
	char telefon[12];
	
	int yno;
	char yad[20];
	char ysoyad[23];
	char ytelefon[12];
	
	
	menu:
	
		
		printf("1.Kaydet\n");
		printf("2.bul\n");
		printf("3.Listele\n");
		printf("4.Duzenle\n");
		printf("5.Sil\n");
		printf("0. Cikis");
		printf("\nLutfen islem Yapmak istediginiz numarayi giriniz :");
		scanf("%d",&sec);
		
		if(sec==1)
		{
			goto kaydet;
		}
		if(sec==2)
		{
			goto bul;
		}
		if(sec==3)
		{
			goto liste;
		}
		if(sec==4)
		{
			goto duzenle;
		}
		if(sec==5)
		{
			goto sil;
		}
		if(sec==0)
		{
			goto son;
		}
		else
		{
			printf("Yanlis islem sectiniz lutfen yeniden deneginiz.");
			goto menu;
			getch();
		}
		
	
	kaydet:
		printf("Lutfen kaydetmek istediginiz bilgileri giriniz :\n\n");
		
		printf("Lutfen Numara giriniz :");
		scanf("%d",&no);
		printf("Lutfen adinizi giriniz :");
		scanf("%s",&ad);
		printf("Lutfen soyadinizi giriniz :");
		scanf("%s",&soyad);
		printf("Lutfen telefon numarasini giriniz :");
		scanf("%s",&telefon);
		
		anaDos=fopen("ogr.st","a");
		fprintf(anaDos,"\n %d %s %s %s",no, ad, soyad, telefon);
		fclose(anaDos);
		getch();
		goto menu;
	bul:
		
		printf("Lütfen Bulmak istediginiz kisinin numarasini giriniz :");
		scanf("%d",&id);
		anaDos=fopen("ogr.st","r");
		while(!feof(anaDos))
		{
			fscanf(anaDos,"\n %d %s %s %s",&no, &ad, &soyad, &telefon);
			if(id==no)
			{
				printf("\n %d %s %s %s",no, ad ,soyad, telefon);
			}
		}
		fclose(anaDos);
		getch();
		goto menu;
	
	liste:
		anaDos=fopen("ogr.st","r");
		while(!feof(anaDos))
		{
		fscanf(anaDos,"%d %s %s %s",&no, &ad, &soyad, &telefon);
		printf("\n %d %s %s %s",no, ad, soyad, telefon);	
		}
		fclose(anaDos);
		getch();
		goto menu;
	
	duzenle:
		
		
		
		printf("Lutfen Degistirmek istediginiz kisinin Numarasini giriniz :");
		scanf("%d",&id);
		
		printf("Lutfen Yeni Numarayi giriniz :");
		scanf("%d",&yno);
		printf("Lutfen Yeni Adi Giriniz :");
		scanf("%s",&yad);
		printf("Lutfen Yeni Soyadi Giriniz :");
		scanf("%s",&ysoyad);
		printf("Lutfen Yeni Telefon Numarasini Giriniz :");
		scanf("%s",&ytelefon);
		
		anaDos=fopen("ogr.st","r");
		gecDos=fopen("gec.st","w");
		while(!feof(anaDos))
		{
			fscanf(anaDos,"%d %s %s %s",&no, &ad, &soyad, &telefon);
			if(id==no)
			{
				fprintf(gecDos,"\n %d %s %s %s",yno, yad, ysoyad, ytelefon);
			}
			else
			{
				fprintf(gecDos,"\n %d %s %s %s",no, ad, soyad, telefon);
			}
		}
		fclose(anaDos);
		fclose(gecDos);
		remove("ogr.st");
		rename("gec.st","ogr.st");
		getch();
		goto menu;
	
	sil:
		printf("Lutfen Silmek istediginiz kisinin Numarasini Giriniz :");
		scanf("%d",&id);
		anaDos=fopen("ogr.st","r");
		gecDos=fopen("gec.st","w");
		while(!feof(anaDos))
		{
			fscanf(anaDos,"%d %s %s %s",&no, &ad, &soyad, &telefon);
			if(id!=no)
			{
				fprintf(gecDos,"\n %d %s %s %s",no, ad ,soyad, telefon);
			}
		}
		fclose(anaDos);
		fclose(gecDos);
		remove("ogr.st");
		rename("gec.st","ogr.st");
		getch();
		goto menu;
	son:
		printf("Program Bitti (_MVC_)");
		getch();
			
}
