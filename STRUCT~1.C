#include<stdio.h>
#include<conio.h>
struct stack
{
	int s[100];
	int top;
};
void push(int ele,struct stack *st);
int pop(struct stack *st);
void display(struct stack st);
void main()
{
	int e;
	struct stack st;
	clrscr();
	st.top=-1;
	push(1,&st);
	push(2,&st);
	push(3,&st);
	display(st);
	e=pop(&st);
	printf("the element %d has been popped \n",e);
	display(st);
	getch();
}
void push(int ele,struct stack *st)
{
	if(st->top==99)
		printf("Stack overflow \n");
	else
		st->s[++st->top]=ele;
}
void display(struct stack st)
{
	int i;
	if(st.top==-1)
	{
		printf("The Stack is empty \n");
		return;
	}
	else
		for(i=st.top;i>=0;i--)
			printf("%d \n",st.s[i]);
}
int pop(struct stack *st)
{	if(st->top==-1)
	{
		printf("Stack underflow \n");
		return;
	}
	else
		return st->s[st->top--];
}
