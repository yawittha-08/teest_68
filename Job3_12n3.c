#include<stdio.h>
void main()
{
    int hour=0,min=0,sec,netSec=0;
    printf("Enter Time(sec) : ");
    scanf("%d",&sec);
    hour=sec/3600;
    min=sec%3600/60;
    netSec=(sec/3600)%60;
    printf("%d Sce = %d Hour : %d Min: %d Sce",sec,hour,min,netSec);
}