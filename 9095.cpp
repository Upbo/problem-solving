/* https://www.acmicpc.net/problem/9095 */
#include <cstdio>

int solve(int n)
{
	if(n < 1) return 0;
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(n == 3) return 4;
	return solve(n-1) + solve(n-2) + solve(n-3);
}
int main() 
{
	int t, n, result;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		result = solve(n);
		printf("%d\n", result);
	}
	return 0;
}
