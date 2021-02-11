#include<stdio.h>
#include<string.h>
int main()
{
    char a[100005],b[100005];
    int l;
    printf("Enter any thing:\t");
    gets(a);
    l=strlen(a);
    for(int i=0;i<l;i++)
        b[i]=a[i];
    puts(b);
    return 0;
}
