//This program is desinged for the purpose of the marks obtained by a student in different subjects and calculate the % of marks obtained in aggregate as per the following conditions
#include<stdio.h> //importing standard input output library
//Starting the main function here 
int main(){
//declaring all necessary variables here
int sub1,sub2,sub3,sub4,sub5;
int percentage;
int totalMarks;

printf("This program is designed to calculate the percentage of marks ");
printf("\n Enter the marks as follow 1)C Prog 2)COA 3)EEA 4)DM 5)CE  and fullmark of each subject is 100\n");
scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);//this line indicates that get all subject marks from users
//calculating the toatal marks 
totalMarks=(sub1+sub2+sub3+sub4+sub5);

//calculating the percentage
percentage=(totalMarks/5);
//here is aggreation logic started
if(percentage<30){
    printf("fail");
}else if(30<=percentage && percentage <=49){
    printf("3rd division");
}else if(50<=percentage && percentage <=69){
     printf("2nd division");
}else if(70<=percentage ){
     printf("1st division");
}

return 0;
}