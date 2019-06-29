/* https://www.acmicpc.net/problem/1475 */
#include <cstdio>
#include <cstring>
char s[7]={0};
int set[9]={0};
int main()
{
    scanf("%s", s);
    int len=strlen(s);
    for(int i=0; i<len;i++)
    {
        if(s[i]-'0'==9) 
        {
            set[6]++;
            continue;    
        }
        set[s[i]-'0']++;
    }
    set[6]%2==0? set[6]/=2 : set[6]=set[6]/2+1;
    int max=-1;
    for(int i=0; i<9; i++)
    {
        if(max<set[i])
            max=set[i];
    }
    printf("%d", max);
    return 0;
}