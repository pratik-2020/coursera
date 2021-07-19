#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define PI 3.1415926535897932384626433832795
#define all(a) a.begin(),a.end()
#define deb(a) cout<<#a<<"->"<<a<<endl
#define nl endl
#define debv(v) for(auto x : v)cout<<x<<" "; cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef set<int> si;
typedef set<ll> sll;
typedef set<double> sd;
typedef set<string> ss;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
int abs(int a){
    return a<0?-1*a:a;
}
vi ar;
vi dp(100001, 0);
int level(int a){
    if(a == -1){
        dp[a] = 0;
        return 0;
    }
    return dp[a] = level(ar[a])+1;
}
void solve(){
    int n;
    //cin>>n;
    n=1;
    n = 100001;
    for(int i=0; i<n; i++){
        int x;
        //cin>>x;
        x = rand()%100001;
        if(i == 50) x=-1;
        ar.pb(x);
    }
    cout<<n<<endl;
    debv(ar);
    for(int i=0; i<n; i++){
        dp[i] = level(i);
    }
    int c = 0;
    for(int i=0; i<n; i++){
        c = max(c,dp[i]);
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

