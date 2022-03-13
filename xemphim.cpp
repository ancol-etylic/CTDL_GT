#include<iostream>
#include<cstring>
using namespace std;

int dp[101][25001];

int main()
{
	int C, N;
	cin >> C >> N;
	int a[1001];
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			if (j >= a[i])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
			}
			else dp[i][j] - dp[i - 1][j];
		}
	}
	cout << dp[N][C] << endl;
}
