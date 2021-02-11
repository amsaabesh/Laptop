#include<bits/stdc++.h>
using namespace std;
struct diu{
    char name[20];
    int meal_no;
    double meal_p_a;
};
int main(){
    int ta[5];
struct diu a[5];
for(int i=0; i<5;i++){
    scanf("%s",a[i].name);
    scanf("%d",&a[i].meal_no);
    scanf("%lf",&a[i].meal_p_a);
    ta[i]=a[i].meal_no*a[i].meal_p_a;
}
for(int i=0;i<5;i++){
    int sum;
    if(i==0){
        sum=0;
    }
    sum+=ta[i];
    if(i==4){
        if(sum==55000)
            printf("Individual Bill = 11000\n");
        else
            printf("display ammount is wrong\n");
    }
}
}
