#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);//\\array declare
    int b[a+1],i,j,k;
    scanf("%d",&k);//position
    for(i=0;i<=a;i++){
        if(i==k-1)
            continue;
        else
            scanf("%d",&b[i]);
    }
    scanf("%d",&b[k-1]);//oi position e input
    for(i=0;i<=a;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}
