#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf",&a);
    if(a>=0 && a<=400){
        b=a*15/100;
        c=a+b;
        printf("Novo salario: %.2lf\n",c);
        printf("Reajust ganho: %.2lf\n",b);
        printf("Em percentual: 15 %% \n");
    }
    else if(a>400 && a<=800){
        b=a*12/100;
        c=a+b;
        printf("Novo salario: %.2lf\n",c);
        printf("Reajust ganho: %.2lf\n",b);
        printf("Em percentual: 12 %% \n");
    }
    else if(a>800 && a<=1200){
        b=a*10/100;
        c=a+b;
        printf("Novo salario: %.2lf\n",c);
        printf("Reajust ganho: %.2lf\n",b);
        printf("Em percentual: 10 %% \n");
    }
    else if(a>1200 && a<=2000){
        b=a*7/100;
        c=a+b;
        printf("Novo salario: %.2lf\n",c);
        printf("Reajust ganho: %.2lf\n",b);
        printf("Em percentual: 7 %% \n");
    }
    else if(a>2000){
        b=a*4/100;
        c=a+b;
        printf("Novo salario: %.2lf\n",c);
        printf("Reajust ganho: %.2lf\n",b);
        printf("Em percentual: 4 %% \n");
    }
    return 0;
}
