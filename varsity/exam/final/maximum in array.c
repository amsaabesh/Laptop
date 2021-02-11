#include<stdio.h>
int main()
{
    int a;
    printf("How many number?\n");
    scanf("%d",&a);
    printf("Enter your numbers\n");
    int b[a],c;
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(i==0)
            c=b[i];
        else{
            if(b[i]>c)
                c=b[i];
        }
    }
    printf("%d is the maximum value\n",c);
    return 0;
}
