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
int maxm(int a,int b){
    return a>b?a:b;
}
void solve(){
    int W,n;
    cin>>W>>n;
    int w[n];
    fill(w,n);
    vector<vector<ll>>dp;
    for(int i=0; i<=W; i++){
        vll temp1;
        for(int j=0; j<=n; j++){
            temp1.pb(0);
        }
        dp.pb(temp1);
    }
    //debv(dp[0]);
    for(int i=1; i<=W; i++){
        for(int j=1; j<=n; j++){
            dp[i][j] = dp[i][j-1];
            if(w[j-1] <= i){
                ll temp = dp[i-w[j-1]][j-1] + w[j-1];
                if(temp > dp[i][j]){
                    dp[i][j] = temp;
                }
            }
        }
    }
    cout<<dp[W][n];
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

