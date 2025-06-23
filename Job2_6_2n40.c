
#include<stdio.h>
void main()
{
    int i,count =5,num,sum=0; 
    float av=0;
    for ( i = 1; i<=count; i++)
{
    printf("Enter number %d : ",i);
    scanf("%d",&num);
    sum=sum+num;
}
av=sum/5;
printf("Average : %.2f",av);
}

