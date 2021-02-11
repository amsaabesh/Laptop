#include<stdio.h>
int check(a)
{
    if(a=='A'){
        printf("1");
    }
    if(a=='B'){
        printf("2");
    }
    if(a=='C'){
        printf("3");
    }
    return a;
}
int main()
{
    char b[2],c[2];
    scanf("%s",&b);
    check(b);
    return 0;
}
