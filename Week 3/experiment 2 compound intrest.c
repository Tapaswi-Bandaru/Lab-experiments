#include <stdio.h>
#include <math.h>
void main()
{
    float p,t,r,total_amount,compound_intrest;
    printf("enter p,t,r values");
    scanf("%f %f %f",&p,&t,&r);
    total_amount=p*pow((1+r/100.0),t);
    compound_intrest=total_amount-p;
    printf("compound intrest=%.2f",compound_intrest);
}
    