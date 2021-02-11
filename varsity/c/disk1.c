#include<stdio.h>
#include<math.h>
int main()
{
    double a=0,b,i;
    while(scanf("%lf",&b)!=EOF){
    a=0;
    for(i=0;i<b;i++){
        //printf("power of 2 to the power %.0lf is %.0lf\n",i,pow(2,i));
        a+=pow(2,i);
    }
    printf("%.0lf\n\n",a);
    }
    return 0;
}
