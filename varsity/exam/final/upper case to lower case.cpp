#include<stdio.h>
#include<string.h>
int main()
{
   char a[25];
   int i,b;
   printf("Enter the string: ");
   scanf("%s",a);
   b=strlen(a);
   for(i=0;i<=b;i++){
      if(a[i]>=65&&a[i]<=90)
         a[i]=a[i]+32;
   }
   printf("\nLower Case String is: %s",a);
   return 0;
}
