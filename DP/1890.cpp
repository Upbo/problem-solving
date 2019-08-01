#include <cstdio>
int b[101][101]={0};
long long m[101][101]={0};
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    m[0][0]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]==0) continue;
            if(i+b[i][j]<n) m[i+b[i][j]][j]+=m[i][j];
            if(j+b[i][j]<n) m[i][j+b[i][j]]+=m[i][j];
        }
    }
    printf("%lld", m[n-1][n-1]);
    return 0;
}