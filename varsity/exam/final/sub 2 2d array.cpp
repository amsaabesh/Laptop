#include<stdio.h>
int main()
{
    printf("Enter Array size(M X N):\n");
    int m,n,i,j;
    scanf("%d:%d",&m,&n);
    printf("enter 1st values\n");
    int a[m][n],b[m][n],c[m][n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    printf("enter 2nd values\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        c[i][j]=a[i][j]-b[i][j];
    }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        printf("%d\n",c[i][j]);
    }

}
