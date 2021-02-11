#include<stdio.h>
typedef struct{
    char n[50],g;
    int a;
    float i;

} star;
int main(){
    star s;
    char a[10];
    printf("name:");
    scanf("%s",&s.n);
    printf("age:");
    scanf("%d",&s.a);
    printf("income:");
    scanf("%f",&s.i);
    printf("gender:");
    gets(a);
    scanf("%s\n",&s.g);

    printf("\n%s \n%d \n%f \n%s",s.n,s.a,s.i,s.g);
}
