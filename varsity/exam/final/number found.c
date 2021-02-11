#include<stdio.h>
int main()
{
    int a,c;
    printf("Which number do you want?\n");
    scanf("%d",&c);
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
        if(b[i]-c);
        else{
            i=-1;
            break;}
            i++;
    }
    if(i==-1){
        printf("exist\n");
    }
    else
        printf("not exist\n");
}
