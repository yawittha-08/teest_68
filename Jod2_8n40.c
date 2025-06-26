#include<stdio.h>
void main()
{
    float x,y,z,max1,max;
    printf("Enter number X :");
    scanf("%f",&x);
    printf("Enter number Y:");
    scanf("%f",&y);
    printf("Enter number Z:");
    scanf("%f",&z);
    max1=(x>y) ?x:y;
    max=(max1>z)?max1:z;
    printf("Max number = %.2f",max);
}