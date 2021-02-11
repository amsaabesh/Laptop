#include<stdio.h>
int main(){
    int i,n,m,flag=0;
    printf("How much number do you want to input?\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Which number do you want to search?\n");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(!(a[i]-m)){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("%d fount in %dth position\n",m,++i);
    else
        printf("sorry\n");
}

