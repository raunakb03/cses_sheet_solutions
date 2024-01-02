#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define foi(i, a, b) for(ll i=a; i<b; i++)
#define all(v) v.begin(), v.end()

int main(){
  ll n;
  cin>>n;
  vector<ll> v(n);
  for(auto & c : v)
    cin>>c;
  // number of distinct values
  set<ll> st(all(v));
  cout<<st.size()<<endl;
}