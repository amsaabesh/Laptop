#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10000];
    int count=0,temp2=0,sum=0,result=0,i,len,temp=0;
    while(scanf("%s",s1)!=EOF){
            count=0,temp2=0,sum=0,result=0,i,len,temp=0;
    len=strlen(s1);
  for(i=0;i<len;i++)

      {
        temp=temp2+s1[i]-'0';
        sum=temp%11;
        result=sum;
        temp2=sum*10;


    }
    if(result==0)
    printf("%s is a multiple of 11.\n",s1);
    else if(result!=0)
        printf("%s is not a multiple of 11.\n",s1);
    }
    return 0;

}
