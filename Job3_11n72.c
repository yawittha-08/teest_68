#include<stdio.h>
void main()
{
    float P_price,Vet=0,T_price=0;
    printf("Entre Product price : ");
    scanf("%f",&P_price);
    Vet=P_price*0.07;
    T_price=P_price+Vet;
    printf("/nVat = %.2f",Vet);
    printf("/nTotal price = %.2f",T_price);
} 