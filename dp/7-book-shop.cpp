#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, p;
  cin>>n>>p;
  vector<int> pages(n), price(n);
  for(auto& c : price) cin>>c;
  for(auto& c :pages) cin>>c;

  vector<vector<int>> dp(n+1, vector<int>(p+1, 0));

  for(int i=1; i<=n; i++){
    for(int j=1; j<=p; j++){
      int include=0, notInclude=0;
      if(j-price[i-1]>=0) include= pages[i-1]+dp[i-1][j-price[i-1]];
      notInclude= dp[i-1][j];

      dp[i][j]= max(include, notInclude);
    }
  }
  cout<<dp[n][p]<<endl;
}