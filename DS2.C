#include<stdio.h>
#include<conio.h>
struct student
{
	char id[25];
	int age,m;
}s[50];
void main()
{
	int i,n;
	clrscr();
	printf("enter the number of students \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the student ID: ");
		scanf("%s",s[i].id);
		printf("\nEnter the age of the student: ");
		scanf("%d",&s[i].age);
		printf("\nEnter the marks obtained by the student: ");
		scanf("%d",&s[i].m);
		if((s[i].age>20) && (s[i].m>=0 && s[i].m<=100))
		{
			printf("\nThe student is eligible for admission \n");
			if(s[i].m>=65)
				printf("And meets the marks criteria for admission of scoring atleast 65 marks\n");
			else
				printf("but doesn't meet the marks criteria for admission of securing atleast 65 marks\n");
		}
		else
			printf("The student is not eligible for admission\n");
	}
	getch();
}