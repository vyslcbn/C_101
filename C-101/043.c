//coded by vyslcbn
//Project043
//Dosya Yazma

#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("example.txt","a");
	
	int x = 5;
	
	fprintf(fp,"x = %d",x);
	return 0;
}



