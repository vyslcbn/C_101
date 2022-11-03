#include <stdio.h>
#include <conio.h>

//üç sayýdan en büyüðünü bulma programý

int main() {
	int a,b,c =0;
	
	Bsl:
				
	printf("\t\t\t\t\t\t_(MVC)_\n");
	
	Dvm:
	printf("Birinciyi Gir:"); scanf("%d,&a");
	printf("Ýkinciyi Gir:"); scanf("%d,&b");
	printf("Ucuncuyu Gir:"); scanf("%d,&c");
	
	Buy:
	
	if(a>b)
	{
	if(a>c) printf("EB sayý= %d,"a;
	else printf("EB sayý= %d,"c);
	}
	else if (b>c )printf("EB sayý= %d,"b);
	else printf("EB sayý= %d,"c);
	
	Son:
	printf("\t\t\t\t\t\t Program Bitti\n");	
	
			
	
	
	return 0;
}

