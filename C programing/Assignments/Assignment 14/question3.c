#include<stdio.h>
#include<string.h>
struct Admin
{
	int id;
	char name[50];
	int salary;
	int allowance;
};

struct Admin storeAdmin();	//function declared
void displayAdmin(struct Admin);			//function declared

void main()					//main starts here
{
	struct Admin ad1,ad2,ad3;	
	ad1=storeAdmin();
	displayAdmin(ad1);
	printf("\n");
	ad2=storeAdmin();
	displayAdmin(ad2);
	printf("\n");
	ad3=storeAdmin();
	displayAdmin(ad3);
}							//main ends here

struct Admin storeAdmin()
{
	struct Admin temp;
	printf("\nEnter id-");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter name-");
	gets(temp.name);
	printf("Enter salary-");
	scanf("%d",&temp.salary);
	printf("Enter allowance-");
	scanf("%d",&temp.allowance);
	return temp;
}
void displayAdmin(struct Admin temp)
{
	printf("\nAdmin Details:");
	printf("\nId-%d \nName-%s \nSalary-Rs.%d \nAllowance-Rs.%d",temp.id,temp.name,temp.salary,temp.allowance);	
}	
	
