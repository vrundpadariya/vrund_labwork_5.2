#include<conio.h>
#include<stdio.h>
void main()
{
int a;
int b;
int c;
int d;
clrscr();
printf("Enter value of a : ");
scanf("%d",&a);
printf("Enter value of b : ");
scanf("%d",&b);
printf("Enter value of c : ");
scanf("%d",&c);
printf("Enter value of d : ");
scanf("%d",&d);

if(a>b){
	if(a>c)
	{
		printf("A is max...");
	}
	else
	{
		printf("c is max");
	}

       }
 else{
    if(b>d)
       {
		printf("B is max");
       }
    else
       {
		printf("D is max");
       }
    }
getch();
}