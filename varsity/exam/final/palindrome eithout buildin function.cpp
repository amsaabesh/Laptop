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
    for(flag=0,i=0;i<l;i++)
    {
        if (rs[i]!=a[i])
            flag=1;
    }
    if (flag==0)
       printf ("%s is a palindrome \n",a);
    else
       printf("%s is not a palindrome \n",a);
    return 0;
}
