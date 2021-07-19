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
int minm(int a, int b, int c){
    if(a<=b&&a<=c){
        return a;
    }
    else if(a>=b&&b<=c ){
        return b;
    }
    return c;
}
void solve(){
    int n;
    cin>>n;
    vi dp(n+1, 0);
    dp[2]=dp[3]=1;
    vi v;
    v.pb(0);
    v.pb(1);
    v.pb(2);
    v.pb(3);
    for(int i=4; i<=n; i++){
        int k=MOD;
        k = minm(i%2 == 0?dp[i/2]+1:MOD,i%3 == 0?dp[i/3]+1:MOD, dp[i-1]+1);
        dp[i] = k;
        if(k == dp[i-1]+1){
            v.pb(1);
        }
        else if(k == dp[i/2]+1 && i%2 == 0){
            v.pb(2);
        }
        else if(k == dp[i/3]+1 && i%3 == 0){
            v.pb(3);
        }
    }//if(n != 1) v.pb(n);
    cout<<dp[n]<<endl;
    vi vd;
    //debv(v);
    for(int i=v.size()-1; i>0;){
        vd.pb(i);
        if(v[i] == 1){
            i-=1;
            //cout<<i<<endl;
        }
        else if(v[i] == 2){
            i = i/2;
            //cout<<i<<endl;
        }
        else if(v[i] == 3){
            i = i/3;
            //cout<<i<<endl;
        }
    }
    //debv(vd);
    reverse(vd.begin(), vd.end());
    debv(vd);
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

