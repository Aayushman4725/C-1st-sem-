#include <stdio.h>
int main(){
	int marks;
	printf("Marks:");
	scanf("%d", &marks);
	
	if(marks<30)
	printf("C");
	else if(marks>=30 && marks<70 )
	printf("B");
	else if(marks>=70 && marks<90)
	printf("A");
	else if(marks>=90 && marks<100)
	printf("A+");
	else if(marks<0)
	printf("error");
	else
	printf("failed");
	
	return 0;
}
