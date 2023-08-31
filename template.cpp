#include <bits/stdc++.h>
using namespace std;
/////////////////////////////////////////DEFINE//////////////////////////////////////////

#define si size()
#define fi first
#define se second
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define foi(i, a, b) for (ll i = a; i < b; i++)
#define ps(x, y) fixed << setprecision(y) << x;

typedef long long int ll;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef map<long long, long long> mll;
typedef vector<pair<long long, long long>> vpll;

////////////////////////////////////////CONST////////////////////////////////////////////

const int inf = 0x3f3f3f3f;
const int maxn = 2e6 + 6;
const double eps = 1e-8;
const int mod = 1000000007;
const int N = 10e2 + 5;
const double pi = 3.14159265358979;

// cout.precision(10);
// cout.setf(ios::fixed);

///////////////////////////////////////FUNCTION//////////////////////////////////////////
void rv(vll &v)
{
    for (auto &c : v)
        cin >> c;
}
void printv(vll &v)
{
    for (auto c : v)
        cout << c << " ";
    cout << endl;
}
void printm(vpll &vp)
{
    for (auto c : vp)
        cout << c.fi << " " << c.se << endl;
}
// ll bs_sqrt(ll x) {ll left = 0, right = 2000000123;while (right > left) {ll mid = left+ ( right - left ) / 2;if (mid * mid > x) right = mid;else left = mid + 1;}return left - 1;}
// void findDivisors(ll n, mll &ml){while (n % 2 == 0){ml[2]++;n = n / 2;}for (ll i = 3; i <= sqrt(n); i = i + 2){while (n % i == 0){ml[i]++;n = n / i;}}if (n > 2)ml[n]++;}
// bool isPrime(ll n){if (n <= 1)return false;if (n <= 3)return true;if (n % 2 == 0 || n % 3 == 0)return false;for (ll i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false;return true;}
// class DisjointSet{public:vector<ll>rank , parent ,size;DisjointSet(ll n){rank.resize(n+1,0);parent.resize(n+1);size.resize(n+1);for(ll i=0;i<=n;i++){parent[i]=i;size[i]=1;}}ll findPar(ll node){if(node == parent[node]){return node;}return parent[node] = findPar(parent[node]);}void unionByRank(ll u, ll v){ll p_u = findPar(u);ll p_v = findPar(v);if(p_u == p_v){return;}if(rank[p_u] < rank[p_v]){parent[p_u] = p_v;}else if(rank[p_u] > rank[p_v]){parent[p_v] = p_u;}}void unionBySize(ll u , ll v){ll p_u = findPar(u);ll p_v = findPar(v);if(p_u == p_v){return;}if(size[p_u] < size[p_v]){parent[p_u] = p_v;size[p_v] += size[p_u];}else{parent[p_v] = p_u;size[p_u] += size[p_v];}}};//DisjointSet ds(28);for size of the graph. ds.findPar(n) for finding ultimate parent . ds.unionBySize(v[i],j); for linking the two nodes
///////////////////////////////////////FUNCTION//////////////////////////////////////////

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}