#include<stdio.h>
int main()
{
    int a;
    printf("How much input?\n");
    scanf("%d",&a);
    int b[a],s=0;
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(i&1)
            s+=b[i];
    }
    printf("%d\n",s);
    return 0;
}

