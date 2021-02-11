#include <stdio.h>
/*Ahmed Mahir Shoaib
id:18192103235
intake:41\n section:6*/
long int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a positive number:\t");
    scanf("%d",&n);
    printf("%ld",multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
