#include <cstdio>
int n, a[1001]={0}, dp[1001]={0};
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int result=0;
    for(int i=0; i<n; i++)
    {
        dp[i]=a[i];
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j])
                dp[i]=max(a[i]+dp[j],dp[i]);
        }
        result=max(dp[i],result);
    }
    printf("%d",result);
    return 0;
}