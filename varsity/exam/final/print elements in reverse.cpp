#include<stdio.h>
int main()
{
    int a;
    printf("How many number?\n\a");
    scanf("%d",&a);
    int c[a],b[a],i=0,j=a-1;
    while(i<a){
        scanf("%d",&b[i]);
        i++;
    }
    do{
        printf("%d \a",b[--a]);
    }
    while(a);

}
