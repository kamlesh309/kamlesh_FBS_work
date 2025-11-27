#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BookManagement 
{
    int id;
    char bookname[30];
    char authorname[30];
    char category[20];
    int price;
    int rating;
};

void addbook(struct BookManagement **bookarr, int *count);
void displaybook(struct BookManagement *bookarr,int count);
void searchbookById(struct BookManagement *bookarr,int count);
void searchbookByName(struct BookManagement *bookarr,int count);
void updatebookById(struct BookManagement *bookarr,int count);
void sortbookByPrice(struct BookManagement *bookarr,int count);
void sortbookByRating(struct BookManagement *bookarr,int count);
void deletebookById(struct BookManagement **bookarr,int *count);

int main() 
{
    printf("---Book Management System---\n");

    struct BookManagement *bookarr;
    int count = 6; 
    int choice;

    bookarr=(struct BookManagement*) malloc(count*sizeof(struct BookManagement));

    bookarr[0].id=101;
    strcpy(bookarr[0].bookname,"Master");
    strcpy(bookarr[0].authorname,"G D Madgulkar");
    strcpy(bookarr[0].category,"Drama");
    bookarr[0].price=410;
    bookarr[0].rating=4;

    bookarr[1].id=102;
    strcpy(bookarr[1].bookname,"Journey");
    strcpy(bookarr[1].authorname,"Amit Patil");
    strcpy(bookarr[1].category,"Travel");
    bookarr[1].price=350;
    bookarr[1].rating=5;

    bookarr[2].id=103;
    strcpy(bookarr[2].bookname,"Space");
    strcpy(bookarr[2].authorname,"Riya Shah");
    strcpy(bookarr[2].category,"Science");
    bookarr[2].price=500;
    bookarr[2].rating=3;

    bookarr[3].id=104;
    strcpy(bookarr[3].bookname,"Secrets");
    strcpy(bookarr[3].authorname,"William Gibson");
    strcpy(bookarr[3].category,"Mystery");
    bookarr[3].price=420;
    bookarr[3].rating=4;

    bookarr[4].id=105;
    strcpy(bookarr[4].bookname,"You Can");
    strcpy(bookarr[4].authorname,"Ravi Verma");
    strcpy(bookarr[4].category,"Sci-Fi");
    bookarr[4].price=480;
    bookarr[4].rating=5;

    bookarr[5].id=106;
    strcpy(bookarr[5].bookname,"Dreams");
    strcpy(bookarr[5].authorname,"Neha Kulkarni");
    strcpy(bookarr[5].category,"Mystery");
    bookarr[5].price=400;
    bookarr[5].rating=4;

    while(1) 
    {
        printf("\nMenu:\n");
        printf("1. Display Books\n");
        printf("2. Add Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Sort Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        fflush(stdin);

        if(choice==1) 
        {
            displaybook(bookarr,count);
        }
        else if(choice==2)
        {
            addbook(&bookarr,&count);	
        }
        else if(choice==3) 
        {
            int search;
            printf("\nEnter 1 if you want to search book by ID or 2 if you want to search book by name:");
            scanf("%d",&search);
            if(search==1)
            {
                searchbookById(bookarr,count);
            }
            else if(search==2)
            {
                searchbookByName(bookarr,count);	
            }    
        } 	
        else if(choice==4) 
        {
            updatebookById(bookarr,count);
        }
        else if(choice==5)
        {
            int sort;
            printf("\nEnter 1 if you want to sort book by price or 2 if you want to sort book by rating:");
            scanf("%d",&sort);
            if(sort==1)
            {
                sortbookByPrice(bookarr,count);
            }
            else if(sort==2)
            {
                sortbookByRating(bookarr,count);	
            }    
        }
        else if(choice==6)
        {
            deletebookById(&bookarr,&count);
        }
        else if(choice==7) 
        {
            printf("\nExit!\n");
            free(bookarr);   
            break;
        }
        else 
        {
            printf("\nInvalid Input.\n");
        }
    }
    return 0;
}


void displaybook(struct BookManagement *bookarr,int count)		
{
    printf("\n\nAvailable Book Details:\n");
    printf("\n-------------------------------------------------------------------------------------\n");
    printf("%-8s %-20s %-20s %-15s %-10s %-8s\n","ID","Book Name","Author","Category","Price","Rating");
    printf("\n-------------------------------------------------------------------------------------\n");

    for(int i=0;i<count;i++) 
    {
        printf("%-8d %-20s %-20s %-15s %-10d %-8d\n",bookarr[i].id,bookarr[i].bookname,bookarr[i].authorname,bookarr[i].category,bookarr[i].price,bookarr[i].rating);              
    }
    printf("-------------------------------------------------------------------------------------\n");
}

void addbook(struct BookManagement **bookarr,int *count) 	
{
	int n;
   	printf("\nHow many books you want to add?");
   	scanf("%d", &n);

   	if(n>0)
	{	
        *bookarr=(struct BookManagement*)realloc(*bookarr,(*count+n)*sizeof(struct BookManagement));

   		for(int i=0;i<n;i++) 
		{
     		int j=*count+i;
     	   	printf("\nEnter Book Details\n");
   			printf("Enter book ID:");
   			scanf("%d",&(*bookarr)[j].id);
			fflush(stdin);
        	printf("Enter book name:");
        	gets((*bookarr)[j].bookname);
        	printf("Enter author's name:");
        	gets((*bookarr)[j].authorname);
        	printf("Enter book category:");
        	gets((*bookarr)[j].category);
        	printf("Enter book price:");
        	scanf("%d",&(*bookarr)[j].price);
        	printf("Enter book rating(out of 5):");
        	scanf("%d",&(*bookarr)[j].rating);
       	}
        *count=*count+n;
    	printf("\nBook Added Successfully.\n");
   	}
}

void searchbookById(struct BookManagement *bookarr,int count)		
{
    int id,flag=0;
    printf("\nEnter Book ID to search:");
    scanf("%d",&id);
    for(int i=0;i<count;i++) 
    {
        if(bookarr[i].id==id) 
        {
            printf("\nBook Found:\n");
            printf("Book ID:%d\n",bookarr[i].id);
            printf("Book Name:%s\n",bookarr[i].bookname);
            printf("Author:%s\n",bookarr[i].authorname);
            printf("Book Category:%s\n",bookarr[i].category);
            printf("Book Price:%d\n",bookarr[i].price);
            printf("Rating:%d\n",bookarr[i].rating);
            flag=1;
            break;
        }
    }
    if (flag==0) 
    {
        printf("\nBook not found.");
    }
}

void searchbookByName(struct BookManagement *bookarr,int count)		
{
    char name[30];
    int flag=0;
    fflush(stdin);
    printf("\nEnter book name you want to search:");
    gets(name);
    for(int i=0;i<count;i++) 
	{
		if(strstr(bookarr[i].bookname,name)!=NULL)
		{
            printf("\nBook Found:\n");
            printf("Book ID:%d\n",bookarr[i].id);
            printf("Book Name:%s\n",bookarr[i].bookname);
            printf("Author:%s\n",bookarr[i].authorname);
            printf("Book Category:%s\n",bookarr[i].category);
            printf("Book Price:%d\n",bookarr[i].price);
            printf("Rating:%d\n",bookarr[i].rating);
            flag=1;
            break;
        }
    }
    if(flag==0) 
    {
        printf("\nBook not found.");
    }
}

void updatebookById(struct BookManagement *bookarr,int count)		
{
    int id, flag=0;
    printf("\nEnter Book ID to update:");
    scanf("%d",&id);
    for(int i=0;i<count;i++) 
	{
        if(bookarr[i].id==id) 
		{
            fflush(stdin);
            printf("Enter new name:");
			gets(bookarr[i].bookname);
            printf("Enter new author:"); 
			gets(bookarr[i].authorname);
            printf("Enter new category:"); 
			gets(bookarr[i].category);
            printf("Enter new price:"); 
			scanf("%d",&bookarr[i].price);
            printf("Enter new rating:"); 
			scanf("%d",&bookarr[i].rating);
            printf("Book updated successfully.\n");
            flag=1;
            break;
        }
    }
    if(flag==0) 
    {
        printf("Book not found.");
    }
}

void sortbookByPrice(struct BookManagement *bookarr,int count)		
{
	struct BookManagement temp;
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(bookarr[i].price>bookarr[j].price)
            {
                temp=bookarr[i];
                bookarr[i]=bookarr[j];
                bookarr[j]=temp;
            }
        }
    }
    printf("\nBooks sorted by low to high price successfully.\n");
    displaybook(bookarr,count);
}

void sortbookByRating(struct BookManagement *bookarr,int count)		
{
	struct BookManagement temp;
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(bookarr[i].rating<bookarr[j].rating)
            {
                temp=bookarr[i];
                bookarr[i]=bookarr[j];
                bookarr[j]=temp;
            }
        }
    }
    printf("\nBooks sorted by high to low rating successfully.\n");
    displaybook(bookarr,count);
}

void deletebookById(struct BookManagement **bookarr,int *count)		
{
    int id, flag=0;
    printf("Enter Book ID you want to delete:");
    scanf("%d",&id);
	int temp=*count;
    for(int i=0;i<temp;i++)
    {
        if((*bookarr)[i].id==id)
        {
            for(int j=i;j<temp-1;j++)
            {
                (*bookarr)[j]=(*bookarr)[j+1];
            }
            (*count)--;

            *bookarr=(struct BookManagement*) realloc(*bookarr,(*count)*sizeof(struct BookManagement));

            flag=1;
            printf("\nBook details deleted successfully.");
            displaybook(*bookarr,*count);
            break;
        }
    }
    if(flag==0)
    {
        printf("\nBook ID not found.");
    }
}
