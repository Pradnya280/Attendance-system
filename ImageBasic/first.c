// Online C compiler to run C program online
#include<stdlib.h>
#include<stdio.h>
void main()
{
    int i,num1,num2;
    // printf("random number is ::");
    for(int i=0; i<=1; i++)
    {
        num1 = rand()%100 + 1;
    }
    printf("Guess the number:");
    scanf("%d",num2);
    if(num1>num2)
    {
        printf("As  guessed number is greater ..num1 is %d and num2 is %d" ,num1, num2);
    }
    else{
          printf("As  guessed number is smaller..num1 is %d and num2 is %d" ,num1, num2);
    }
    
}