/* https://www.acmicpc.net/problem/2748 */ 
#include <cstdio>
long long f[91];
int main()
{
    int n;
    scanf("%d",&n);
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for(int i=3; i<n; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%lld", f[n-1]);
    return 0;
}