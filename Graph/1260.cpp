#include <cstdio>
#include <queue>
using namespace std;
int g[1001][1001]={0};
queue<int> q;
bool visit_dfs[1001];
bool visit_bfs[1001];
int n;
void dfs(int v)
{
    printf("%d ",v);
    visit_dfs[v]=true;
    for(int i=1; i<=n; i++)
    {
        if(g[v][i]==1&&visit_dfs[i]==false)
            dfs(i);
    }
}
void bfs(int v)
{
    q.push(v);
    visit_bfs[v]=true;
    while(!q.empty())
    {
        int v2=q.front();
        q.pop();
        printf("%d ",v2);
        for(int i=1; i<=n; i++)
        {
            if(g[v2][i]==1&&visit_bfs[i]==false)
            {
                visit_bfs[i]=true;
                q.push(i);
            }
        }
    }
}
int main()
{
    int m,v,x,y;
    scanf("%d %d %d",&n, &m, &v);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d",&x,&y);
        g[x][y]=g[y][x]=1;
    }
    dfs(v);
    printf("\n");
    bfs(v);
    return 0;
}