#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("Enter the value of A: ");
scanf("%d",&a);

printf("Enter the value of B: ");
scanf("%d",&b);

printf("Enter the value of C: ");
scanf("%d",&c);

if(a<b){
  if(b<c){
  printf("B is min ");
  }else{
  printf("C is min ");
  }

}else{
printf("A is min ");
}




getch();
}