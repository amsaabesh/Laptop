#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=1&& a<=100){
        if (a==2)
            printf("NO\n");
        else if (a%2)
            printf("NO\n");
        else
            printf("Yes\n");
    }
    return 0;
}

