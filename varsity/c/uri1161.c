#include<stdio.h>
int main()
{
    long int N,M,i=1,k=1,j;
    long f=1,g=1;
    scanf("%ld%ld",&N,&M);
    if(N>=0&&N<=20&&M>=0&&M<=20)
    {
        while(i<=N)
        {
            f=f*i;
            i++;
        }
    }
    if(N>=0&&N<=20&&M>=0&&M<=20)
    {
        while(k<=M)
        {
            g=g*k;
            k++;
        }

    }
    j=f+g;
    printf("%ld",j);
    return 0;
}
