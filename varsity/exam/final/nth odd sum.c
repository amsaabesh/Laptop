#include<stdio.h>
int sum(int n)
{
    if(n%2==0)
        return (n-1);
    else if (n==1)
        return 1;
    else
        return n+sum(n-2);
}
int main()
{
    int n,summation;
    printf("Enter the value of n=\a");
    scanf("%d",&n);
    summation=sum(n);
    printf("%d\a",summation);
}
