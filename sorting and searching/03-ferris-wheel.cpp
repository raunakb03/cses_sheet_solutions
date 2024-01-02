#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define foi(i, a, b) for (ll i = a; i < b; i++)
#define all(v) v.begin(), v.end()

int main()
{
  ll n, y;
  cin >> n >> y;
  vector<ll> wts(n);
  for (auto &c : wts)
    cin >> c;
  ll ans = 0;
  multiset<ll> ms(all(wts));
  while (ms.size())
  {
    if(ms.size()==1){
      ans++;
      break;
    }
    auto last= ms.end();
    last--;
    ll val= *last;
    ll rem= y-val;
    if(*ms.begin()<=rem){
      auto it= ms.begin();
      ms.erase(it);
      it= ms.end();
      it--;
      ms.erase(it);
      ans++;
    }
    else{
      ms.erase(last);
      ans++;
    }
  }
  cout<<ans<<endl;
}