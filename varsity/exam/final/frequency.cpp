#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int si,i,j,co;
    printf("Enter size of array: ");
    scanf("%d",&si);
    printf("Enter elements in array: ");
    for(i=0;i<si;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<si;i++)
    {
        co=1;
        for(j=i+1;j<si;j++)
        {
            if(arr[i]==arr[j])
            {
                co++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=co;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0;i<si;i++)
    {
        if(freq[i]!=0)
        {
            printf("Frequency of %d = %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}
