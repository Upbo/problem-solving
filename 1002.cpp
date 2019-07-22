#include <cstdio>
#include <utility>
using namespace std;
int solve(pair<int,int> a, pair<int,int> b, int r1, int r2)
{
    int x=a.first-b.first;
    int y=a.second-b.second;
    int dist=x*x + y*y;
    int diff=(r2-r1)*(r2-r1);
    int sum=(r1+r2)*(r1+r2);
    if(!dist) return diff ? 0 : -1;
    else if(dist==sum || dist==diff) return 1;
    else if(diff<dist && dist<sum) return 2;
    else return 0;
}
int main()
{
    int t, r1, r2;
    pair<int, int> a,b;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d %d %d %d",&a.first, &a.second, &r1, &b.first, &b.second, &r2);
        printf("%d\n", solve(a,b,r1,r2));
    }
    return 0;
}