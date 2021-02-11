#include<stdio.h>
#include<string.h>
int main()
{
    FILE *project,*val;
    project = fopen("projectloop.txt","a");
    val=fopen("id.txt","r");
    int x;
    char ccccc;
    again:
    fscanf(val,"%d",&x);
    fprintf(project,"ID :%d\n",x);
    char n[100],g[100],m[100],h[10];
    int a,w,s,rs,rw;
    double h1,h2,h3,bmi,dif,bmr;
    printf("Enter your name:");
    gets(n);
    strupr(n);
    printf("Enter your age:");
    scanf("%d",&a);{
    if(a<=17){
    fprintf(project,"Child\n");}
    else if(a>=18)
    fprintf(project,"Adult\n");
    printf("Enter your gender(male/female):");
    scanf("%s",&g);}
    printf("Enter your height(For inch press "" i "" For meter press "" m "":");
    {
        scanf("%s",h);
        if(strcmp(h,"i")==0){
            printf("Enter your height in inch:");
            scanf("%lf",&h1);
            h3=h1*2.54;
            h3=h3/100;
        }
        else if(strcmp(h,"m")==0){
            printf("Enter your height in meter:");
            scanf("%lf",&h2);
            h3=h2;
        }
    }
    printf("Enter your weight(in kg):");
    scanf("%d",&w);
    printf("Enter your sleep time(in hour)(Average):");
    scanf("%d",&s);
    fprintf(project,"Name :%s. Age :%d years. Gender: %s. Height: %.2lf m. Weight: %d kg, Sleep time: %d hour.\n",n,a,g,h3,w,s);
    {
    if(strcmp(g,"male")==0)
    {
    bmr=(66.4+(13.75*w)+(5.003*100*h3)-(6.755*a));
    fprintf(project,"BMR :%.0lf\n",bmr);
    if(bmr<=1926)
    fprintf(project,"You should do little exercise or no exercise.\n");
    if(bmr>1926 && bmr<=2207)
    fprintf(project,"You should exercise 1-3 times per week.\n");
    if(bmr>2207 && bmr<=2351)
    fprintf(project,"You should exercise 4-5 times per week.\n");
    if(bmr>2351 && bmr<=2488)
    fprintf(project,"You should exercise daily.\n");
    if(bmr>2488 && bmr<=2769)
    fprintf(project,"You should do intense exercise 6-7 times per week.\n");
    if(bmr>2769 && bmr<=3050)
    fprintf(project,"You should do very intense exercise daily.\n");
    }
    else if(strcmp(g,"female")==0)
    {
    bmr=(655.1+(9.563*w)+(1.85*100*h3)-(4.676*a));
    fprintf(project,"BMR :%.0lf\n",bmr);
    if(bmr<=1727)
    fprintf(project,"You should do little exercise or no exercise.\n");
    if(bmr>1727 && bmr<=1979)
    fprintf(project,"You should exercise 1-3 times per week.\n");
    if(bmr>1979 && bmr<=2108)
    fprintf(project,"You should exercise 4-5 times per week.\n");
    if(bmr>2108 && bmr<=2230)
    fprintf(project,"You should exercise daily.\n");
    if(bmr>2230 && bmr<=2482)
    fprintf(project,"You should do intense exercise 6-7 times per week.\n");
    if(bmr>2482 && bmr<=2734)
    fprintf(project,"You should do very intense exercise daily.\n");
    }
    }
    {
    bmi=(w/(h3*h3));
    fprintf(project,"BMI :%.2lf\n",bmi);
    if(bmi<18.5){
    dif=18.5-bmi;
    rw=(dif*(h3*h3));
    fprintf(project,"Your BMI is considered as underweight.You need to increase your weight at least %d kg.\n",rw);}
    if(bmi>=18.5 && bmi<=24.9){
    fprintf(project,"Your BMI is considered as Normal.\n");}
    if(bmi>=25 && bmi<=29.9){
    dif=29.9-bmi;
    rw=(dif*(h3*h3));
    fprintf(project,"Your BMI is considered as overweight.You need to decrease your weight at least %d kg.\n",rw);}
    if(bmi>30){
    dif=bmi-29.9;
    rw=(dif*(h3*h3));
    fprintf(project,"Your BMI is considered as obese.You must need to decrease your weight at least %d kg.\n",rw);}
    }
    {
    if(a>=1 && a<=2 && s==13)
    fprintf(project,"You have a healthy sleep.\n");
    else if(a>=1 && a<=2 && s<13){
    rs=13-s;
    fprintf(project,"You need to sleep more %d hours daily.\n",rs);}
    else if(a>=1 && a<=2 && s>13){
    rs=s-13;
    fprintf(project,"You should sleep less than %d hours to stay healthy.\n",rs);}
    else if(a>=3 && a<=5 && s==12)
    fprintf(project,"You have a healthy sleep.\n");
    else if(a>=3 && a<=5 && s<12){
    rs=12-s;
    fprintf(project,"You need to sleep more %d hours daily.\n",rs);}
    else if(a>=3 && a<=5 && s>12){
    rs=s-12;
    fprintf(project,"You should sleep less than %d hours to stay healthy.\n",rs);}
    else if(a>=6 && a<=13 && s==10)
    fprintf(project,"You have a healthy sleep.\n");
    else if(a>=6 && a<=13 && s<10){
    rs=10-s;
    fprintf(project,"You need to sleep more %d hours daily.\n",rs);}
    else if(a>=6 && a<=13 && s>10){
    rs=s-10;
    fprintf(project,"You should sleep less than %d hours to stay healthy.\n",rs);}
    else if(a>=14 && a<=17 && s==9)
    fprintf(project,"You have a healthy sleep.\n");
    else if(a>=14 && a<=17 && s<9){
    rs=9-s;
    fprintf(project,"You need to sleep more %d hours daily.\n",rs);}
    else if(a>=14 && a<=17 && s>9){
    rs=s-9;
    fprintf(project,"You should sleep less than %d hours to stay healthy.\n",rs);}
    else if(a>=18 && s==8)
    fprintf(project,"You have a healthy sleep.\n");
    else if(a>=18&& s<8){
    rs=8-s;
    fprintf(project,"You need to sleep more %d hours daily.\n",rs);}
    else if(a>=18 && s>8){
    rs=s-8;
    fprintf(project,"You should sleep less than %d hours to stay healthy.\n",rs);}
    }
    printf("\n\n");
    printf("%d\n",x);
        if(a<=17)
            printf("Child\n");
        else
            printf("Adult\n");
        printf("Name :%s. Age :%d years. Gender: %s. Height: %.2lf m. Weight: %d kg, Sleep time: %d hour.\n",n,a,g,h3,w,s);
        if(strcmp(g,"male")==0)
    {
    bmr=(66.4+(13.75*w)+(5.003*100*h3)-(6.755*a));
    printf("BMR :%.0lf\n",bmr);
    if(bmr<=1926)
    printf("You should do little exercise or no exercise.\n");
    if(bmr>1926 && bmr<=2207)
    printf("You should exercise 1-3 times per week.\n");
    if(bmr>2207 && bmr<=2351)
    printf("You should exercise 4-5 times per week.\n");
    if(bmr>2351 && bmr<=2488)
    printf("You should exercise daily.\n");
    if(bmr>2488 && bmr<=2769)
    printf("You should do intense exercise 6-7 times per week.\n");
    if(bmr>2769 && bmr<=3050)
    printf("You should do very intense exercise daily.\n");
    }
    else if(strcmp(g,"female")==0)
    {
    bmr=(655.1+(9.563*w)+(1.85*100*h3)-(4.676*a));
    printf("BMR :%.0lf\n",bmr);
    if(bmr<=1727)
    printf("You should do little exercise or no exercise.\n");
    if(bmr>1727 && bmr<=1979)
    printf("You should exercise 1-3 times per week.\n");
    if(bmr>1979 && bmr<=2108)
    printf("You should exercise 4-5 times per week.\n");
    if(bmr>2108 && bmr<=2230)
    printf("You should exercise daily.\n");
    if(bmr>2230 && bmr<=2482)
    printf("You should do intense exercise 6-7 times per week.\n");
    if(bmr>2482 && bmr<=2734)
    printf("You should do very intense exercise daily.\n");
    }
    bmi=(w/(h3*h3));
    printf("BMI :%.2lf\n",bmi);
    if(bmi<18.5){
    dif=18.5-bmi;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as underweight.You need to increase your weight at least %d kg.\n",rw);}
    if(bmi>=18.5 && bmi<=24.9){
    printf("Your BMI is considered as Normal.\n");}
    if(bmi>=25 && bmi<=29.9){
    dif=29.9-bmi;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as overweight.You need to decrease your weight at least %d kg.\n",rw);}
    if(bmi>30){
    dif=bmi-29.9;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as obese.You must need to decrease your weight at least %d kg.\n",rw);}
            printf("%d\n",x);
        if(a<=17)
            printf("Child\n");
        else
            printf("Adult\n");
        printf("Name :%s. Age :%d years. Gender: %s. Height: %.2lf m. Weight: %d kg, Sleep time: %d hour.\n",n,a,g,h3,w,s);
        if(strcmp(g,"male")==0)
    {
    bmr=(66.4+(13.75*w)+(5.003*100*h3)-(6.755*a));
    printf("BMR :%.0lf\n",bmr);
    if(bmr<=1926)
    printf("You should do little exercise or no exercise.\n");
    if(bmr>1926 && bmr<=2207)
    printf("You should exercise 1-3 times per week.\n");
    if(bmr>2207 && bmr<=2351)
    printf("You should exercise 4-5 times per week.\n");
    if(bmr>2351 && bmr<=2488)
    printf("You should exercise daily.\n");
    if(bmr>2488 && bmr<=2769)
    printf("You should do intense exercise 6-7 times per week.\n");
    if(bmr>2769 && bmr<=3050)
    printf("You should do very intense exercise daily.\n");
    }
    else if(strcmp(g,"female")==0)
    {
    bmr=(655.1+(9.563*w)+(1.85*100*h3)-(4.676*a));
    printf("BMR :%.0lf\n",bmr);
    if(bmr<=1727)
    printf("You should do little exercise or no exercise.\n");
    if(bmr>1727 && bmr<=1979)
    printf("You should exercise 1-3 times per week.\n");
    if(bmr>1979 && bmr<=2108)
    printf("You should exercise 4-5 times per week.\n");
    if(bmr>2108 && bmr<=2230)
    printf("You should exercise daily.\n");
    if(bmr>2230 && bmr<=2482)
    printf("You should do intense exercise 6-7 times per week.\n");
    if(bmr>2482 && bmr<=2734)
    printf("You should do very intense exercise daily.\n");
    }
    bmi=(w/(h3*h3));
    printf("BMI :%.2lf\n",bmi);
    if(bmi<18.5){
    dif=18.5-bmi;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as underweight.You need to increase your weight at least %d kg.\n",rw);}
    if(bmi>=18.5 && bmi<=24.9){
    printf("Your BMI is considered as Normal.\n");}
    if(bmi>=25 && bmi<=29.9){
    dif=29.9-bmi;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as overweight.You need to decrease your weight at least %d kg.\n",rw);}
    if(bmi>30){
    dif=bmi-29.9;
    rw=(dif*(h3*h3));
    printf("Your BMI is considered as obese.You must need to decrease your weight at least %d kg.\n",rw);}
    printf("\n\n");
    printf("If you want to continue type ""continue"",else type ""exit"".\n");
    scanf("%s",m);
    if(strcmp(m,"exit")==0){
        val=fopen("id.txt","w");
        fprintf(val,"%d",++x);
        getch();
        return 0;
    }
    else if(strcmp(m,"continue")==0)
    {
        scanf("%c",&ccccc);
        printf("\n\n\n");
        x++;
        goto again;
    }
    else
            {
        val=fopen("id.txt","w");
        fprintf(val,"%d",++x);
        getch();
        return 0;
    }
}
