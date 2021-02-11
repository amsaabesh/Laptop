#include<stdio.h>
int main()
{
    FILE *a;
    char b[40],id[15],mail[100],uni[102],hg[2];
    int age;
    double cgpa;
    a=fopen("aa.txt","a");
    printf("Enter your name\n");
    gets(b);
    printf("Enter your mail\n");
    gets(mail);
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your varsity name\n");
    gets(hg);
    gets(uni);
    printf("Enter your id\n");
    gets(id);
    printf("Enter your cgpa\n");
    scanf("%lf",&cgpa);
    fprintf(a,"Name = %s, ID = %s, Age = %d Your university is = %s, Your mailing address is = %s your cgpa is %.2lf\n",b,id,age,uni,mail,cgpa);
    fclose(a);
}
