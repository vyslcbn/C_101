#include <stdio.h>
#include <conio.h>

//öðrenci vize ve final notuna göre baþarý durumu hesaplama

int main() {
	int v, f=0;
	float ont;
	int sor=1;
	
	
	Bsl:
				
	printf("\t\t\t\t\t\t_(MVC)_\n");
	
	Dvm:
	while (sor==1)
	{
		printf("\n Vize notunu giriniz:"); scanf("%d.&v");
		printf("\n Final notunu giriniz:"); scanf("%d.&f");		
		
		
	hsp:
	ont=(v*0.20)+(f*0.80);
	printf("\n Ortalama not= %f", ont);
	if(ont<50) {printf(\t Kalýr, Baþarýsýz.);}
	else if(ort>50 and ont<50) {printf(\t Borçlu Geçer.);}
	
	
	
			
		}	
		

	Son:
	printf("\t\t\t\t\t\t Program Bitti\n");	
	

	return 0;
}

