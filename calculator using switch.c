//CLACULATOR TO PERFORM ADDITION,MULTIPLICATION,DIVISION,SUBTACTION
#include<stdio.h>                                  //HEADER FILE
#include<math.h>                                   //HEADER FILE
int main()                                         //MAIN FUCTION
{
  float variable1,variable2;                       //DECLARATION OF VARIABLE IN FLAOTE DATA TYPE
  int choice;                                      //DECLARATION OF VARIABLE IN INTEGER DATA TYPE
  printf("ENTER TWO VALUES TO PERFORM OPERATION\n");
  scanf("%f%f",&variable1,&variable2);               //TAKING INPUT FROM USER
  printf("SELECT THE OPERATION TO PERFORM:\n");      //TAKING OPERATION CHOICE FROM USER
  printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
  scanf("%d",&choice);
  switch(choice)                                            //USING SWITCH FUNCTION TO PERFORM DIFFERENT TASKS
{
case 1://ADDITION
    printf("%.2f + %.2f = %.2f",variable1,variable2,variable1+variable2);
    break;
case 2://SUBTRACTION
    printf("%.2f - %.2f =%.2f",variable1,variable2,variable1-variable2);
    break;
case 3://MULTIPLICATION
    printf("%.2f x %.2f =%.2f",variable1,variable2,variable1*variable2);
    break;
case 4://DIVISION
    printf("%.2f / %.2f= %.2f",variable1,variable2,variable1/variable2);
    break;
default:
    printf("YOUR CHOICE IS WRONG!!");
    break;
}
return 0;
}



