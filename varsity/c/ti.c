#include<stdio.h>
int main()
{
    int i,j,n,b=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

        for(j=n;j>=b;j--){
            printf("%d ",j);
        }
        b++;
        printf("\n");
    }
        return 0;

}
