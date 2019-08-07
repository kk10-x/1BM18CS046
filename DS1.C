#include<stdio.h>
#include<conio.h>
struct student
{
	char id[25];
	int age,m;
}s;
void main()
{
	clrscr();
	printf("Enter the student ID: ");
	scanf("%s",s.id);
	printf("\nEnter the age of the student: ");
	scanf("%d",&s.age);
	printf("\nEnter the marks obtained by the student: ");
	scanf("%d",&s.m);
	if((s.age>20) && (s.m>=0 && s.m<=100))
	{
		printf("\nThe student is eligible for admission \n");
		if(s.m>=65)
			printf("And meets the marks criteria for admission of scoring atleast 65 marks");
		else
			printf("but doesn't meet the marks criteria for admission of securing atleast 65 marks");
	}
	else
		printf("The student is not eligible for admission");
	getch();
}