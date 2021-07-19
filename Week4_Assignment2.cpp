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
map<int,int> m;
vi a;
int c=0;
void calc_max(int l, int r){
    if(l == r){
        m[a[l]]++;
        c = max(c,m[a[l]]);
        return;
    }
    int mid = l + (r-l)/2;
    calc_max(l,mid);
    calc_max(mid+1,r);
}
void solve(){
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        a.pb(x);
        m.insert(make_pair(x,0));
    }
    calc_max(0,n/2);
    calc_max((n/2)+1,n-1);
    if(c > n/2){
        cout<<1;
        return;
    }
    cout<<0;
    return;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

