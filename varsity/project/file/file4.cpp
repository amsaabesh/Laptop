#include<stdio.h>
int main()
{
    FILE *read;
    //char a;
    int a,b,c,d;
    read=fopen("osthir.txt","r");
        fscanf(read,"%d%d%d%d",&a,&b,&c,&d);
        printf("%d   %d",a+b,c*d);
    fclose(read);
    return 0;
}
