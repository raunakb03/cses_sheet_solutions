#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  // dp[i] denotes min number of moves to make 0 from i
  vector<int> dp(n+1, 1e9);
  dp[0]=0;
  for(int i=1; i<=n; i++){
    for(int j=i; j>0; j/=10){
      int rem= j%10;
      if(i-rem>=0) dp[i]= min(dp[i], 1+dp[i-rem]);
    }
  }
  cout<<dp[n]<<endl;
}