#include <cstdio>
#include <algorithm>
int p[1001];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d",&p[i]);
    std::sort(p,p+n);
    int result=0;
    for(int i=0;i<n; i++)
        for(int j=0; j<=i; j++)
            result+=p[j];
    printf("%d", result);
    return 0;
}