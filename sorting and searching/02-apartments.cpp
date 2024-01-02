#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define foi(i, a, b) for(ll i=a; i<b; i++)
#define all(v) v.begin(), v.end()

// n apartments 
// m applicants
// k max allowed difference
// each will accept an apartment close enough to their own dimensions
int main(){
  ll n, m, k;
  cin>>n>>m>>k;
  vector<ll> a(n), b(m);
  foi(i, 0, n) cin>>a[i];
  foi(i, 0, m) cin>>b[i];
  sort(all(a));
  sort(all(b));
  ll i=0, j=0, ans=0;
  while(i<n && j<m){
    if(a[i]>b[j]+k) j++;
    else if(a[i]<b[j]-k) i++;
    else i++, j++, ans++; 
  }
  cout<<ans<<endl;
}