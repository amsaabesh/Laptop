#include<stdio.h>
#include<string.h>
int main()
{
    char a[120];
    int b;
    scanf("%d",&b);
    if(b&1){
        strcpy(a,"aabesh");
    }
    else
        strcpy(a,"shoaib");
    printf("%s",a);
}
