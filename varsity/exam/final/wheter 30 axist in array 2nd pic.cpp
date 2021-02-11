#include<stdio.h>
int main()
{
    int a;
    printf("How many number?\t");
    scanf("%d",&a);
    int b[a],i=0;
    while(i<a){
        scanf("%d",&b[i]);
        i++;
    }
    i=0;
    while(i<a)
    {
        if(b[i]-30);
        else{
            i=-1;
            break;}
            i++;
    }
    if(i==-1){
        printf("30 found\n");
    }
    else
        printf("30 not found\n");
}
