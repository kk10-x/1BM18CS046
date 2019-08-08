#include<stdio.h>
#include<conio.h>
int validate(struct student s);
int qualify(struct student s);
struct student
{
	char id[25];
	int age,marks;
};
struct student s[100];
void main()
{
	int n,i;
	clrscr();
	printf("Enter number of Students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Student ID \n");
		scanf("%s",s[i].id);
		printf("Enter the Age of the Student \n");
		scanf("%d",&s[i].age);
		printf("Enter the Marks obtained by the Student\n");
		scanf("%d",&s[i].marks);
		if(qualify(s[i]))
			printf("Student meets the criteria and is eligible for admission\n");
		else
			printf("Student doesnt not meet the criteria for eligiblity\n");

		printf("\n");
	}
	getch();
}
int validate(struct student s)
{
	if((s.age>20)&&(s.marks>=0)&&(s.marks<=100))
	return 1;
	else
	return 0;
}
int qualify(struct student s)
{
	if(validate(s))
	{
		if(s.marks>=65)
		return 1;
		else
		return 0;
	}
	else
	{
		printf("Invalid Data\n");
		return 0;
	}
}