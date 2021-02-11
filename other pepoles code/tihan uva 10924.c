#include<stdio.h>
#include<string.h>
int main()
{
    char c[21];
    int a,sum=0,i,j,p=1,e;
    while(scanf("%s",c)==1){
            sum=0;
            p=1;
         a=strlen(c);
    for(i=0;i<a;i++){
        if(c[i]>=65 && c[i]<=90)
            e=c[i]-38;
        else if(c[i]>=97 && c[i]<=122)
            e=c[i]-96;

            sum+=e;
    }
    printf("%d",sum);
        for(j=2;j<sum;j++){
            if(sum%j==0)
            p++;
        }
        if(p==1)
        printf("It is a prime word\n");
        else
        printf("It is not a prime word\n");
    }
        return 0;
}
