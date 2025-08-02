#include<stdio.h>
#include<string.h>
struct SalesManager
{
	int id;
	char name[50];
	int salary;
	int incentive;
	int target;
};

struct SalesManager storeSalesManager();	//function declared
void displaySalesManager(struct SalesManager);			//function declared

void main()					//main starts here
{
	struct SalesManager sm1,sm2,sm3;	
	sm1=storeSalesManager();
	displaySalesManager(sm1);
	printf("\n");
	sm2=storeSalesManager();
	displaySalesManager(sm2);
	printf("\n");
	sm3=storeSalesManager();
	displaySalesManager(sm3);
}							//main ends here

struct SalesManager storeSalesManager()
{
	struct SalesManager temp;
	printf("\nEnter id-");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter name-");
	gets(temp.name);
	printf("Enter salary-");
	scanf("%d",&temp.salary);
	printf("Enter incentive-");
	scanf("%d",&temp.incentive);
	printf("Enter target-");
	scanf("%d",&temp.target);
	return temp;
}
void displaySalesManager(struct SalesManager temp)
{
	printf("\nSales Manager Details:");
	printf("\nId-%d \nName-%s \nSalary-Rs.%d \nIncentive-Rs.%d \nTarget-Rs.%d",temp.id,temp.name,temp.salary,temp.incentive,temp.target);	
}	
	
