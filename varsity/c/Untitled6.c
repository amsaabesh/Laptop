#include<stdio.h>
int jog(int a,int b){
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",jog(a,b));
}
