#include<stdio.h>
int main()
{
    int i,j,c=0,s=0,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        c=0;
        for(j=1;j<=i;j++){
        if(i%j==0){
            c++;

            }
        }
        if(c==2){
            s+=i;
            printf("%d\n",i);

        }
    }
    printf("And their sum is: %d",s);
    return 0;
}
