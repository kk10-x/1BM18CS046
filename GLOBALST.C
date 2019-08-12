#include<stdio.h>
#include<conio.h>
int top;
int stack[100];
void push(int ele);
int pop();
void display();
void main()
{
	int e;
	clrscr();
	push(1);
	push(2);
	push(3);
	display();
	e=pop();
	printf("the element %d has been popped \n",e);
	display();
	getch();
}
void push(int ele)
{
	if(top==99)
		printf("Stack overflow \n");
	else
		stack[++top]=ele;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("The Stack is empty \n");
		return;
	}
	else
		for(i=top;i>=0;i--)
			printf("%d \n",stack[i]);
}
int pop()
{	if(top==-1)
	{
		printf("Stack underflow \n");
		return;
	}
	else
		return stack[top--];
}
