// เขียนโปรเเกรมคำนวณพื่นที่ของวงกลมโดยรับรัศมีของวงกลมจจากผู้ใช้
#include<stdio.h>
void main()
{
    const float PI = 3.14159265;
    float r , CArea=0;
    printf("Enter redius : ");
    scanf("%f",&r);
    printf("r = %.2f",r);
    CArea = PI*(r*r);
    printf("\nCircle area = %.2f",CArea);
}