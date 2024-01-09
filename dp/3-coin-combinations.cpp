#include<bits/stdc++.h>
using namespace std;

int main(){
  int mod= 1e9+7;
  int n, x;
  cin>>n>>x;
  vector<int> vals(n);
  for(int i=0; i<n; i++) cin>>vals[i];

  // number of different coin combinations to make sum x
  // dp[i] -> number of ways to make sum x
  vector<int>dp(x+1, 0);
  dp[0]=1; 

  for(int i=1; i<=x; i++){
    for(int j=0; j<n; j++){
      if(i-vals[j]>=0) (dp[i]+=dp[i-vals[j]])%=mod;
    }
  }
  cout<<dp[x]<<endl;
}