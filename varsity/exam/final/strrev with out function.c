#include <stdio.h>
#include <string.h>
int main()
{
    char a[25],rs[25]={'\0'};
    int i,l=0,flag=0;
    printf("Enter a string \n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;//for string lenth without strlen(a)
    }
    for(i=l-1;i>=0;i--)
    {
        rs[l-i-1]=a[i];
    }
       printf("Reverse of %s is %s\n",a,rs);
    return 0;
}

