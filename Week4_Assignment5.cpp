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
vi a,b;
int c=0;
void calc_coin_seg(int x, int l, int r){
    if(l>r){
        return;
    }
    if(l == r){
        if(a[l] <= x && b[l] >= x){
            c++;
            //cout<<c<<endl;
            return;
        }
        else{
            return;
        }
    }
    int mid = l + (r-l)/2;
    calc_coin_seg(x,l,mid);
    calc_coin_seg(x,mid+1,r);
}
void solve(){
    int s,p,x,y;
    //cin>>s>>p;
    s = 50000;
    p = 50000;
    for(int i=0; i<s; i++){
        //cin>>x>>y;
        x = rand()%10000000;
        y = rand()%10000000;
        a.pb(x);
        b.pb(y);
    }
    for(int i=0; i<p; i++){
        //cin>>x;
        x = rand()%100000000;
        //int c=0;
        calc_coin_seg(x,0,s/2);
        calc_coin_seg(x,(s/2)+1,s-1);
        cout<<c<<" ";
        c=0;
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    t = rand()%1000000000;
    //while(t--)
    solve();
    return 0;
}

