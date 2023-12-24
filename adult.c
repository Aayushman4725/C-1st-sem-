#include <stdio.h>
int main(){
	int age;
	printf("Enter age:");
	scanf("%d", &age);
	if(age>=18){
		printf("adult\n");
		printf("They can vote\n");
		printf("They can drive\n");
	}
	else{
		printf("not adult\n");
	}
	printf("Thank you");
	
	
	
	
	
	return 0;
}
