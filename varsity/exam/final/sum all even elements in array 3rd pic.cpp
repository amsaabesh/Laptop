#include<stdio.h>
int main()
{
    int a,s=0;
    printf("How many Number?\t");
    scanf("%d",&a);
    int b[a];
    while(a--){
        scanf("%d",&b[a-1]);
        if(b[a-1]&1);
        else
            s+=b[a-1];
    }
    printf("sum is %d",s);
    return 0;
}
