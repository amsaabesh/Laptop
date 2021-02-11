#include <stdio.h>
int s(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum=%d",s(n));
    return 0;
}
int s(int n)
{
    if(n!=0)
        return n+s(n-1);
    else
        return n;
}
