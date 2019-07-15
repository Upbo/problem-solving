#include <cstdio>
int arr[100001];
int main()
{
    int t, sum=0, before=0, index=0;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&arr[index]);
        if(!arr[index] && index>0)
            index--;  
        else
            index++;
    }
    for(int i=0; i<index; i++)
        sum+=arr[i];
    printf("%d",sum);
    return 0;
}