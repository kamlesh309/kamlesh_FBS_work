#include<stdio.h>
#include<string.h>
struct Book
{
	char name[30];
	int id;
	char author[30];
	int price;
};
void storebook(struct Book* bookarr);
void displaybook(struct Book* bookarr);
void main()
{
	struct Book bookarr[5];
	storebook(bookarr);
	displaybook(bookarr);
}

void storebook(struct Book* bookarr)
{
	for(int i=0;i<5;i++)
	{
		fflush(stdin);
		printf("\nEnter book name:");
		gets(bookarr[i].name);
		printf("Enter book id:");
		scanf("%d",&bookarr[i].id);
		fflush(stdin);
		printf("Enter author name:");
		gets(bookarr[i].author);
		printf("Enter price:");
		scanf("%d",&bookarr[i].price);
	}
}

void displaybook(struct Book* bookarr)
{
	printf("\nBook Details:\n");
	for(int i=0;i<5;i++)
	{
		printf("\nBook name-%s",bookarr[i].name);
		printf("\nBook ID-%d",bookarr[i].id);
		printf("\nAuthor Name-%s",bookarr[i].author);
		printf("\nBook price-%d",bookarr[i].price);
	}
}