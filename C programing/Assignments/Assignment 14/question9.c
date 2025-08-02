#include<stdio.h>
struct complex 
{
    int real,img;
};

struct complex storeComplex();
void displayComplex(struct complex);
struct complex addComplex(struct complex,struct complex);

void main() 
{
    struct complex c1,c2,c3;

    c1.real=25;
    c1.img=78;
    printf("Complex Number 1:\n");
    displayComplex(c1);

    c2=storeComplex();
    printf("Complex Number 2:\n");
    displayComplex(c2);

    c3=addComplex(c1,c2);
    printf("Addition of Complex Numbers:\n");
    displayComplex(c3);
}

struct complex storeComplex() 
{
    struct complex c;
    printf("\nEnter real part:");
    scanf("%d",&c.real);
    printf("Enter imaginary part:");
    scanf("%d",&c.img);
    return c; 
}

void displayComplex(struct complex c) 
{
    printf("%d+%di\n",c.real,c.img);
}

struct complex addComplex(struct complex a, struct complex b) 
{
    struct complex result;
    result.real=a.real+b.real;
    result.img=a.img+b.img;
    return result;
}
