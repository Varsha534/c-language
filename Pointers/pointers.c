#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x = 2; int *p;
	p=&x;    
	printf("Value of variable x = %d \n",x);
    printf("Value at address give by pointer variable = %d \n",*p);
    
    printf("Value of pointer variable = %d \n",p);
    printf("Address of pointer variable = %d \n",&p);
    printf("Address of variable x = %d \n",&x);
    
	return 0;
}
