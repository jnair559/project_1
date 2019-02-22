#include<stdio.h>
#include<stdlib.h>

int rpm(int rpm1,int rpm2);
float p1,p2;
float ratio;
int main()
{

    int dia_1=3;//diameter of wheels in meter
    int dia_2=2;
    float a=3.14;

    p1=a*dia_1;//calculating perimeter
    printf("Perimeter1=%.2f \n",p1);

    p2=a*dia_2;
    printf("Perimeter2=%.2f \n",p2);

    ratio=p1/p2;
    printf("Ratio=%.1f",ratio);

}
int rpm(int rpm1,int rpm2)
{
    int speed1=1000;//speed of large wheel 60kmph=1000mps
    int speed2=2000;

    rpm1= (ratio*speed1)/p1;
    printf("RPM1=%d",rpm1);
    printf("RPM2=%d",rpm2);
    rpm2= (ratio*speed2)/p2;

}
