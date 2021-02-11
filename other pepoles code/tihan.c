#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,j,max,min,co=0;
    float c;
        scanf("%d%d",&a,&b);
          if(a>b){
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
            co++;
    }
    printf("%d",co);
    return 0;

}
