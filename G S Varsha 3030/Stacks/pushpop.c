#include <stdio.h>
#include <stdlib.h>
 void push ();
 void pop ();
 void display ();
 int top=-1;  int data; int array[10]; 

int main() 
 {
	int choice; 
	printf("Enter Your Choice \n 1.Push \n 2.Pop \n 3.Display \n");
	scanf("%d",&choice);
	
	for(i=0; i<=15; i++)
	{
		switch(choice)
    	{
		case 1 : push ();
		break;
		case 2 : pop ();
		break;
		case 3 : display ();
		break;
        }
	}

}

 void push ()
 {

	if (top == 9)
	{
	   printf("overflow");
	}
	else 
	{
		printf("Enter data \n");
		scanf("%d",&data);
		top = top++;
		array[top] = data;
	}
}

 void pop ()
 {
    if (top == -1)
 	{
 		printf("Underflow");
	}
	else
	{
		top = top-1;
	}
 }
 
 void display ()
 {
    int i; 
    if (array[i]==-1)
	{
		printf("Stack is empty");
	}
	else 
	{
		for (i=0;i<=9;i++)
        {
			printf("%d",array[i]);
		}
	 }
 }
