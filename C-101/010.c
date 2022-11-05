//coded by vyslcbn
//Project010
//Continue / devam et

#include <stdio.h>

int main(){
	int i = 0;
	
	while (i < 10) {
		if(i == 4){
			i++;
			continue;
		}
		printf("%d\n" , i);
		i++;
	}

	return 0;
}

