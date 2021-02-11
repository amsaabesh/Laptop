#include<stdio.h>
int main()
{
   int a;
   while(scanf("%d",&a)!=EOF){
    if(a/100000000>=13&&a/100000000<=19){
        if(a/100000000==13||a/100000000==17){
            printf("0%d is a Grameen Phone number\n",a);

        }
        if(a/100000000==14||a/100000000==19){
            printf("0%d is a Banglalink number\n",a);

            }
        if(a/100000000==16){
            printf("0%d is an Airtel number\n",a);

        }
        if(a/100000000==15){
            printf("0%d is a Taletalk number\n",a);

        }
        if(a/100000000==18){
            printf("0%d is a Robi number\n",a);

        }

        }
         else{
            printf("0%d is an Invalid number\n",a);

    }

   }

   return 0;
}
