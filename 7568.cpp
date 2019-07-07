/* https://www.acmicpc.net/problem/7568 */
#include <cstdio>
#include <utility>
using namespace std;
pair<int,int> s[51];
int main()
{
    int n, h, w;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &w, &h);
        s[i]=make_pair(w, h);
    }
    int rank=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i].first < s[j].first && s[i].second < s[j].second)
                rank++;

        }
        printf("%d ", rank);
        rank=1;
    }
    return 0;
}