#include <stdio.h>
void main()
{
    int A=10, B=5, C=2, D=6, E=3, F=4, G=2, i=5, j,s1,s2,s3;
    s1=A+B*C+(D*E)+F*G;
    s2=A/B*C-B+A*D/3;
    s3=A+++B---A;
    j=(i++)+(++i);
    printf("s1=%d",s1);
    printf("\ns2=%d",s2);
    printf("\ns3=%d",s3);
    printf("\nj=%d",j);
}