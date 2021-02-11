#include <stdio.h>
int main()
{
    int j=1,tc,i,n,t1=0,t2=1,nextTerm;
    scanf("%d",&tc);
    while(j<=tc){
    scanf("%d",&n);
    t1=0;
    t2=1;
    for (i=1;i<=n;++i)
    {
        if(i!=n){
        printf("%d,",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;}
        else
            printf("%d\n",t1);
    }
    j++;
    }
    return 0;
}
