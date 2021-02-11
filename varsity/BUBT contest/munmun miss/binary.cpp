#include <stdio.h>
int main()
{
  int l=0,u,m,n,i,j,temp,s;
  printf("Enter how much number:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("Which number do you want?\n");
  scanf("%d",&s);
    u=n-1;
    m=(l+u)/2;
    while(a[m]!=s&&l<=u){
        if(a[m]>s)
            u=m-1;
        else
            l=m+1;
        m=(l+u)/2;
    }
    if(a[m]-s==0)
        printf("Found\n");
    else
        printf("hehe nai\n");
  return 0;
}

