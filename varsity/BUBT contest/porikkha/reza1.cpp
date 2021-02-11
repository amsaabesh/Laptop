#include<stdio.h>
int sum(double c,double d){
double a,b;
printf("sum is: %.2lf + %.2lf = %.2lf",a,b,a+b);
}
int sub(double c,double d){
double a,b;
printf("sum is: %.2lf - %.2lf = %.2lf",a,b,a-b);
}
int mul(double c,double d){
double a,b;
printf("sum is: %.2lf X %.2lf = %.2lf",a,b,a*b);
}
int div(double c,double d){
double a,b;
printf("sum is: %.2lf // %.2lf = %.2lf",a,b,a+b);
}
int main(){
    double c,d;
    int e;
    scanf("%lf%lf",&c,&d);
    printf("A. Addition\nB. Subtraction\nC. Multiplication\nD. Division\nEnter your choise: ");
    scanf("%d",&e);
    if(e==1){
        sum(c,d);
    }
    else if(e==2){
        sub(c,d);
    }
    else if(e==3){
        mul(c,d);
    }
    else if(e==4){
        div(c,d);
    }
    else
        printf("Wrong\n");
}
