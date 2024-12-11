//write a program to find the smallest element of three number
#include<stdio.h>
//declaring main function
int main(){
int num1,num2,num3; //declaring the three numbers variable which holds the values 
printf("This program belongs to find out grater number among three number \n");
printf("Enter the numbers one by one : ");
scanf("%d %d %d",&num1,&num2,&num3); //here value assigned to each variable by user 

//business logic started here

if(num1>num2 && num1>num3){
    printf("%d is grater number ",num1);
}else 
if(num2>num1 && num2>num3){
     printf("%d is grater number ",num2);
}
else{
     printf("%d is grater number ",num3);
}
//business logic end here 
return 0;

}