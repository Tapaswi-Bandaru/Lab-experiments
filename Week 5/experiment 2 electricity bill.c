#include <stdio.h>
void main()
{
    int units;
    float bill;
    printf("Enter units consumed");
    scanf("%d", &units);
    if(units<=100)
    bill=units*1.50;
    else if(units>=101 && units<=200)
    bill=(100*1.50)+((units-100)*2.50);
    else if(units>=201 && units<=500)
    bill=(100*1.50)+(100*2.50)+(300*4)+((units-500)*6);
    printf("bill=%f",&bill);
}    
    