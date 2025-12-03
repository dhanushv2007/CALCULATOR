//CLACULATOR TO PERFORM ADDITION,MULTIPLICATION,DIVISION,SUBTACTION
#include<stdio.h>
#include<math.h>
int main()
{
  float variable1,variable2;
  int choice;
  printf("ENTER TWO VALUES TO PERFORM OPERATION\n");
  scanf("%f%f",&variable1,&variable2);
  printf("SELECT THE OPERATION TO PERFORM:\n");
  printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
  scanf("%d",&choice);
  switch(choice)
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
}



