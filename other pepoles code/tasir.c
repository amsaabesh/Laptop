#include<stdio.h>
int main()
{
    int a,b,c,d,result1,result2,result3,result4,result5,result6,answer1,answer2,answer3,answer4;
     result1=result2=result3=result4=result5=result6=0;
   scanf("%d%%d%d%d",&a,&c,&b,&d);
         if(a>=0&&a<=23&&c<=59&&c>=0&&b>=0&&b<=23&&d<=59&&d>=0)
   {

       if(a<=b){
        result1=(b-a)*60;
        if(c<=d){
        result2=c-d;
        answer1=result1+result2;
        printf("%d\n",answer1);
        }
        else if(c>=d){
            result3=60-c+d;
            answer2=result1+result3;
            printf("%d\n",answer2);

}
       }
else if(a>=b){
    result4=(23-a+b)*60;
    if(c<=d){
        result5=c-d;
        answer3=result4+result5;
        printf("%d\n",answer3);
    }
        else if(c>=d){
            result6=60-c+d;
            answer4=result4+result6;
            printf("%d\n",answer4);


}
}
//else if(a==0&&b==0&&c==0&&d==0)

   }
   return 0;

}
