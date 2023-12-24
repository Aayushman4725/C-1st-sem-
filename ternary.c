#include <stdio.h>
int main(){
	char rainbow;
	printf("Enter color:");
	scanf("%c", &rainbow);
	switch(rainbow){
		case'r':printf("red");
		break;
		case'i':printf("indigo");
		break;
		case'o':printf("orange");
		break;
		case'g':printf("green");
		break;
		deafult:printf("Error");
		}
	
	
	
	
	
	return 0;
}
