//2. Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
void triangletype(int,int,int);	//declaration
void main()
{
	int s1,s2,s3;
	printf("Enter three sides of triangle:");
	scanf("%d%d%d",&s1,&s2,&s3);
	triangletype(s1,s2,s3);	//call
}	//main ends here

void triangletype(int s1,int s2,int s3)	//definition
{

	if(s1==s2 && s2==s3)
	{
		printf("The given triangle is equilateral.");	
	}
	else if(s1==s2 || s2==s3 || s1==s3)
	{
		printf("The given triangle is isosceles.");	
	}
	else
	{
		printf("The given triangle is scalene.");	
	}	
}