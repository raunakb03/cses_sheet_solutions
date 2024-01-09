#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;
  int vals[n];
  for (int i = 0; i < n; i++)
    cin >> vals[i];
  // make the sum x using the minimum number of coins
  // if not possible to produce the desired sum the return -1
  // dp[x] min number of coins required to make the sum x
  vector<int> dp(x+1, 1e8);
  dp[0] = 0;
  for (int i = 0; i < n; i++)
    if(vals[i]<=x)
      dp[vals[i]] = 1;
  for (int i = 1; i <= x; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i - vals[j] >= 0)
        dp[i] = min(dp[i], dp[vals[j]] + dp[i - vals[j]]);
    }
  }
  if (dp[x] == 1e8)
    dp[x] = -1;
  cout << dp[x] << endl;
}