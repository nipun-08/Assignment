//Program to check if the number is prime or not

#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    

    while(i<=a)
    {
       if(a%i==0)
       {
        c++;
       }
       i++;
    }
    if(c==1)
    {
        printf("It is a prime \n");
    }
    else 
    {
        printf("It is not a prime \n");
    }
    return 0;
}
