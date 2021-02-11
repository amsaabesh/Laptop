#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,o,i,j,k;
    int a[m][n][o];
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&o);
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                for(k=0;k<o;k++){
                        scanf("%d",&a[i][j][k]);
                        printf("%d\n",a[i][j][k]);
            }
        }
    }
    return 0;
}
