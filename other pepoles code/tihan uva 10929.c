#include<stdio.h>
#include<string.h>
int main()
{
    char n[150];
    int l,i,a=0,b;
    for(;;){
    scanf("%s",n);
    a=0;
    l=strlen(n);
    for(i=0;i<l;i++){
       // n[i]=n[i]-32;
        a=a*10+n[i]-'0';

    b=a%11;}
        if(b==0 && l==1)
            break;
        else if(b==0)
            printf("%d is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",n);
    }
    return 0;
}
