#include<stdio.h>
int main()
{
    int a,f,g;
    double b,c,d,e;
    scanf("%d",&a);
    if(a==1){
        printf("enter the over: \n");
        scanf("%lf",&b);
        f=b;
        b-=f;
        f*=6;
        g=b*10;
        printf("%d",f+g);
        }
}
