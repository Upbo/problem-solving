/* https://www.acmicpc.net/problem/1912 */
#include <cstdio>
int arr[100001];
int dp[100001];
int max(int a, int b)
{
    return a>b? a:b;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result=arr[0];
    dp[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        dp[i]=max(dp[i-1]+arr[i], arr[i]);
        result=max(result, dp[i]);
    }
    printf("%d", result);
    return 0;
}