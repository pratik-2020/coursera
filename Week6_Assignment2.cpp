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
//vll d(31,457,281,0);
void solve(){
    int n;
    cin>>n;
    int a[n];
    fill(a,n);
    if(n < 3){
        cout<<0;
        return;
    }
    vll v;
    for(int i=1; i<(int)pow(2,n); i++){
        ll sm=0;
        for(int j=0; j<n; j++){
            int msk = 1<<j;
            if((i&msk) == msk){
                sm+=a[j];
            }
        }
        v.pb(sm);
    }
    if(v[v.size()-1]%3 != 0){
        cout<<"0";
        return;
    }
    //debv(v);
    //cout<<v[v.size()-1]/3<<endl;
    //debv(v);
    int d = v[v.size()-1]/3;
    int ct = count(v.begin(), v.end(), d);
    if(ct >2){
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

