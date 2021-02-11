#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int p,n,d;
    float c;
    printf("Enter principle & year\n");
    scanf("%d%d",&p,&n);
    if(n<1)
        printf("you can't open any deposit");
    if(n<=3)
    {
        c=p*pow((1+.05),n);
        printf("your total amount is %f",c);
    }
    if(n<=5)
    {
        c=p*pow((1+.07),n);
        printf("your total amount is %f",c);
    }
    else
    {
        c=p*pow((1+.1),n);
        printf("your total amount is %f",c);
    }

    return 0;
}
