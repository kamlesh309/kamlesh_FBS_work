#include<stdio.h>
#include<string.h>
struct HR
{
	int id;
	char name[50];
	int salary;
	int commission;
};

struct HR storeHR();	//function declared
void displayHR(struct HR);			//function declared

void main()					//main starts here
{
	struct HR hr1,hr2,hr3;	
	hr1=storeHR();
	displayHR(hr1);
	printf("\n");
	hr2=storeHR();
	displayHR(hr2);
	printf("\n");
	hr3=storeHR();
	displayHR(hr3);
}							//main ends here

struct HR storeHR()
{
	struct HR temp;
	printf("\nEnter id-");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter name-");
	gets(temp.name);
	printf("Enter salary-");
	scanf("%d",&temp.salary);
	printf("Enter commission-");
	scanf("%d",&temp.commission);
	return temp;
}
void displayHR(struct HR temp)
{
	printf("\nAdmin Details:");
	printf("\nId-%d \nName-%s \nSalary-Rs.%d \nCommission-Rs.%d",temp.id,temp.name,temp.salary,temp.commission);	
}	
	
