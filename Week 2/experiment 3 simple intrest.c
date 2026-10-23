#include <stdio.h>
void main()
{
    float p, r, t,intrest;
    printf("Enter principal amount");
    scanf("%f", &p);
    printf("Enter rate of interest ");
    scanf("%f", &r);
    printf("Enter time period in years");
    scanf("%f", &t);
    intrest = (p * r * t) / 100;
    printf("Simple Interest = %f", intrest);
}
