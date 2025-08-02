#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[50];
	int salary;
};

struct employee storeEmployee();	//function declared
void displayEmployee(struct employee);			//function declared

void main()					//main starts here
{
	struct employee e1,e2,e3;	
	e1=storeEmployee();
	displayEmployee(e1);
	printf("\n");
	e2=storeEmployee();
	displayEmployee(e2);
	printf("\n");
	e3=storeEmployee();
	displayEmployee(e3);
}							//main ends here

struct employee storeEmployee()
{
	struct employee temp;
	printf("\nEnter id-");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter name-");
	gets(temp.name);
	printf("Enter salary-");
	scanf("%d",&temp.salary);
	return temp;
}
void displayEmployee(struct employee temp)
{
	printf("\nEmployee Details:");
	printf("\nId-%d \nName-%s \nSalary-Rs.%d",temp.id,temp.name,temp.salary);	
}	
	
