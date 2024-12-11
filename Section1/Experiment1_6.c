//This program is designed for the purpose  of swap two numbers.
#include<stdio.h> //importing the standard input output library
//here main function started
int main(){
int num1,num2;
printf("This program works for swapping two numbers\n");
printf("Enter two numbers :- ");
scanf("%d %d",&num1,&num2);
printf("\nBefore swapping a=%d and b=%d",num1,num2);
//here swapping logic started
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("\nAfter swapping a=%d and b=%d",num1,num2);

return 0;
}