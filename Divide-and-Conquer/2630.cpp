#include <cstdio>
int p[129][129];
int w=0, b=0;
// white:0 blue:1
void solve(int x, int y, int length)
{
    if(!length) return;
    int start=p[x][y];
    bool cut=false;
    for(int i=x; i<x+length; i++)
    {
        for(int j=y; j<y+length; j++)
            if(p[i][j]!=start) 
            {
                cut=true;
                break;
            }
        if(cut) break;
    }
    if(cut)
    {
        solve(x, y, length/2);
        solve(x+length/2, y, length/2);
        solve(x, y+length/2, length/2);
        solve(x+length/2, y+length/2, length/2);
    }
    else
    {
        if(start) b++;
        else w++;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &p[i][j]);
    int length=n;
    solve(0,0,length);
    printf("%d\n", w);
    printf("%d", b);
    return 0;
}