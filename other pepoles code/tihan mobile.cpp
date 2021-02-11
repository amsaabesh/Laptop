#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,j,max,min,d=0;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF){
            d=0;
    if(a==0 && b==0)
        break;
         else if(a>b){
         max=a;
        min=b;
    }
    else if(b>a) {
         max=b;
        min=a;
    }

    for(j=min;j<=max;j++){
        c=sqrt(j);
        if(c*c==j)
            d++;
    }
    printf("%d\n",d);
    }

    return 0;

}
