//This program is written on the purpose of convrt degree celcious to farenhite and vice versa
#include<stdio.h> //importing standard input output library or header file 

//Function designed for converting Celcious to Fahrenhite 
float CelciousToFahrenhite(float Celcious){

float result=0.0;
//logic started here 

result= (Celcious *9/5)+32;

return result;
}


//Function for converting Fahrenhite to Celcious

float FahrenhiteToCelcious(float Fahrenhite){
    float result=0.0;
    result= (Fahrenhite-32) * 5/9;
    return result;
}
//Starting the  main function
int main(){

float  Fahrenhite,Results=0.0,Celcious;
int choice;
//ending of variable initialization 
while(choice !=3){
    printf("\n1.Celcious to Fahrenhite \n 2.Farhenhite to Celcious \n3.Exit");
    printf("\nEnter your choice 1 or 2 or 3 according to above options:");
    scanf("%d",&choice);
    if(choice!=1 && choice!= 2 && choice!=3 ){
        printf("\nOpss....Please enter a valid options\n");
        continue;
    }

    if(choice == 1){
        printf("\n Enter the Celcious:");
        scanf("%f",&Celcious);
        //calling the celcious to Fahrenhite function
       Results=CelciousToFahrenhite(Celcious);
       printf("After conversion %.4f becomes %.4f Fahrenhite\n",Celcious,Results);
    }

    if(choice == 2){
           printf("\n Enter the Fahrenhite:");
        scanf("%f",&Fahrenhite);
        //calling the Fahrenhite to Celcious function
           Results=FahrenhiteToCelcious(Fahrenhite);
       printf("After conversion %.4f becomes %.4f Celcious\n",Fahrenhite,Results);
    }
}

return 0;

}