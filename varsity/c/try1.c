#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a&1)
        printf("A");
    else if(b&1)
        printf("B");
    else if(c&1)
        printf("C");
    else if(d&1)
        printf("D");
return 0;
}
