#include<stdio.h>
#include<math.h>

int main()

{
    int T=1,tsk;
    double R1,R2,R3,a,b,c,A,B,C,t1,t2,t3,t4,s,T1;
    scanf("%d",&tsk);
    if(tsk>=1 && tsk<=100)
    {
    while(T<=tsk)

    {
    scanf("%lf%lf%lf",&R1,&R2,&R3);
    a=R2+R3;
    b=R1+R3;
    c=R1+R2;
    s=(a+b+c)/2;
    T1=sqrt(s*(s-a)*(s-b)*(s-c));
    A=acos((b*b+c*c-a*a)/(2*c*b));
    B=acos((a*a-b*b+c*c)/(2*c*a));
    C=acos((a*a+b*b-c*c)/(2*b*a));
    t1=.5*R1*R1*A;
    t2=.5*R2*R2*B;
    t3=.5*R3*R3*C;
    t4=t1+t2+t3;

    printf("Case %d: %.3lf\n",T,(T1-t4)/4/*সেই ৪ দিয়ে ভাগ*/);
    T++;
    }


    }

    return 0;
}
