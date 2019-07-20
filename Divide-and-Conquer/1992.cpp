#include <cstdio>
int a[65][65];
void solve(int x, int y, int n)
{
    int start=a[y][x];
    if(n==1)
    {
        printf("%d", start);
        return;
    }
    bool same=true;
    for(int i=y; i<y+n&&same; i++)
        for(int j=x; j<x+n&&same; j++)
            if(a[i][j]!=start)
                same=false;
    if(same)
        printf("%d", start);
    else
    {
        printf("(");
        solve(x,y,n/2);
        solve(x+n/2,y,n/2);
        solve(x,y+n/2,n/2);
        solve(x+n/2,y+n/2,n/2);
        printf(")");
    }
        
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%1d", &a[i][j]);
    solve(0,0,n);
    return 0;
}