#include <cstdio>
int dp[1001]={0};
int a[1001];
int n;
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int m=0;
    for(int i=1; i<=n; i++)
    {
        m=0;
        for(int j=0; j<i; j++)
        {
            if(a[j]<a[i])
                m=max(m,dp[j]);
        }
        dp[i]=m+1;
    }
    int result=-1;
    for(int i=1; i<=n; i++)
    {
        result=max(result, dp[i]);
    }
    printf("%d", result);
    return 0;
}