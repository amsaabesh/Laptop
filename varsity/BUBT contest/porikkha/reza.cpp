#include<stdio.h>
int leap(int );
int main()
{
 int year;
 scanf("%d", &year);
 if(leap(year))
   printf("\nYes");
 else
   printf("\nNo");
 return 0;
}

int leap(int y)
{
 if(y%400==0 &&( y%100!=0||y%4==0))
    return 1;
 else
    return 0;
}
