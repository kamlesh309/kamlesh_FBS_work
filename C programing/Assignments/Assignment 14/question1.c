#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[50];
	int marks;
};

struct student storestudent();				//function declared
void displaystudent(struct student);		//function declared

void main()					//main starts here
{
	struct student s1,s2,s3;	
	s1=storestudent();
	displaystudent(s1);
	printf("\n");
	s2=storestudent();
	displaystudent(s2);
	printf("\n");
	s3=storestudent();
	displaystudent(s3);
}							//main ends here

struct student storestudent()
{
	struct student temp;
	printf("\nEnter roll number-");
	scanf("%d",&temp.rollno);
	fflush(stdin);
	printf("Enter name-");
	gets(temp.name);
	printf("Enter marks-");
	scanf("%d",&temp.marks);
	return temp;
}
void displaystudent(struct student temp)
{
	printf("\nStudent Details:");
	printf("\nRoll no-%d \nName=%s \nMarks=%d",temp.rollno,temp.name,temp.marks);	
}	
	
