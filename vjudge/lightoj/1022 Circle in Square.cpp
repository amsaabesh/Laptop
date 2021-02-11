#include<stdio.h>
#include<math.h>
int main(){
    double rad,pi=2*acos(0.0),sq_side,res,cir_are,sq_are;
    //printf("%lf",pi);
    int i=1,n;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&rad);
        sq_side=rad*2;
        sq_are=pow(sq_side,2);
        cir_are=pow(rad,2)*pi;
        res=sq_are-cir_are;
        printf("Case %d: %.2lf\n",i,res);
        i++;
    }
}
