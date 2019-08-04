#include <cstdio>
int a[51]={0};
int min(int a,int b)
{
    return a>b?b:a;
}
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int n, nmin=1000001, nmax=0;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d", &n);
        long long result=n*n;
        printf("%lld", result);
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        nmin=min(nmin, a[i]);
        nmax=max(nmax, a[i]);
    }
    long long result=nmin*nmax;
    printf("%lld", result);
    return 0;
}