#include <cstdio>
int c[101];
int dp[10001];
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
    }
    dp[0]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(j-c[i]>=0) dp[j]+=dp[j-c[i]];
        }
    }
    printf("%d\n", dp[k]);
    return 0;
}