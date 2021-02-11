#include<stdio.h>
int main()
{
    int b,c,i,j,s=0;
    printf("Enter array size M X N: \t");
    scanf("%d:%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        if(a[i][j]%2==0)
            s+=a[i][j];
    }
    printf("sum is %d\n",s);
    return 0;
}
