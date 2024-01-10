#include<bits/stdc++.h>
using namespace std;

int main(){
  int mod= 1e9+7;
  int n;
  cin>>n;
  vector<vector<int>> grid(n, vector<int>(n, 0));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      char ch;
      cin>>ch;
      if(ch=='*') grid[i][j]= 1; 
    }
  }

  // grid[i][j]=1 shows obstacle otherwise shows a clear path
  vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
  if(grid[n-1][n-1]!=1) dp[n-1][n-1]=1;
  for(int i=n-1; i>=0; i--){
    for(int j=n-1; j>=0; j--){
      if(grid[i][j]==0)
        (dp[i][j]+= dp[i+1][j]+dp[i][j+1])%=mod;
    }
  }

  cout<<dp[0][0]<<endl;
}