//coded by vyslcbn
//Project015
//functions Multiple Parameters

#include <stdio.h>

void myFunction(char name[], int age){
	printf("Hello %s. You are %d years old\n", name, age);

}

int main(){
	myFunction("Veysel", 21);
	myFunction("Zeynep", 15);
	myFunction("Duru", 5);


	return 0;
}

