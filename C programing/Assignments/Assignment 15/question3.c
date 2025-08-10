#include<stdio.h>
#include<string.h>
struct Player
{
	char name[30];
	int played,runs,wickets;
};
void storePlayer(struct Player* ,int);
void displayPlayer(struct Player* ,int);
void maxDetails(struct Player* ,int);
void main()
{
	struct Player arr[10];
	storePlayer(arr,10);
	displayPlayer(arr,10);
	maxDetails(arr,10);
	
}
void storePlayer(struct Player* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter player name:");
		gets(arr[i].name);
		printf("Enter number of matches played:");
		scanf("%d",&arr[i].played);
		printf("Enter number of runs scored:");
		scanf("%d",&arr[i].runs);
		printf("Enter number of wickets taken:");
		scanf("%d",&arr[i].wickets);
	}
}
void displayPlayer(struct Player* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nPlayer Details:");
		printf("\nPlayer Name:%s",arr[i].name);
		printf("\nMatches Played:%d",arr[i].played);
		printf("\nRuns Scored:%d",arr[i].runs);
		printf("\nWickets taken:%d",arr[i].wickets);
	}
}
void maxDetails(struct Player* arr,int size)
{
	int maxruns=arr[0].runs;
	int maxwic=arr[0].wickets;
	for(int i=1;i<size;i++)
	{
		if(arr[i].runs>maxruns)
		{
			maxruns=arr[i].runs;
		}	
		if(arr[i].wickets>maxwic)
		{
			maxwic=arr[i].wickets;
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("\nPlayers scoring highest run:");
		if(arr[i].runs==maxruns)
		{
			printf("\nPlayer Details:");
			printf("\nPlayer Name:%s",arr[i].name);
			printf("\nMatches Played:%d",arr[i].played);
			printf("\nRuns Scored:%d",arr[i].runs);
			printf("\nWickets taken:%d",arr[i].wickets);
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("\nHighest wicket taker:");
		{
			if(arr[i].wickets==maxwic)
			{
				printf("\nPlayer Details:");
				printf("\nPlayer Name:%s",arr[i].name);
				printf("\nMatches Played:%d",arr[i].played);
				printf("\nRuns Scored:%d",arr[i].runs);
				printf("\nWickets taken:%d",arr[i].wickets);	
			}	
		}	
	}
}
