#include<stdio.h>
int main()
{
    int a,b,c;
    double e,f;
    printf("1-Add\n2-Subtract\n3-Multiply\n4-Divede\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==1)
        printf("%d + %d = %d\n",b,c,b+c);
    else if(a==2)
        printf("%d - %d = %d\n",b,c,b-c);
    else if(a==3)
        printf("%d * %d = %d\n",b,c,b*c);
    else if(a==4){
        if(c)
            printf("%d / %d = %.2lf\n",b,c,(double)b/c);
        else
            printf("Math Error\n");
    }
}
