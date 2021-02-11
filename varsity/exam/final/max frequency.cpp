#include<stdio.h>
#include<limits.h>
void mx(int*ar,int s)
{
    int i,j,maxCount,maxElement,co;
    maxCount = INT_MIN;
    for(i=0;i<s;i++){
        co=1;
        for(j=i+1;j<s;j++){
            if(ar[j]==ar[i]){
                co++;
                if(co>maxCount){
                    maxCount=co;
                    maxElement=ar[j];
                }
            }
        }
    }
    printf("Maximum Repeating Element : %d\nis: %d time\n\a",
        maxElement, maxCount);
}
int main()
{
    int a;
    printf("Enter Array size\a\n");
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
        scanf("%d",&ar[i]);
    mx(ar,a);
    return 0;
}
