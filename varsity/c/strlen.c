#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b;
    gets(a);
    b=strlen(a);
    printf("%d",b);
    return 0;
}
