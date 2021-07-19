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
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    //int t=1;
    int D,n,m;
    cin>>D>>m>>n;
    int a[n],d=0,c=0,t=0;
    fill(a,n);
    if(n == 1){
        if(m>=D){
            cout<<0;
            return 0;
        }
        if(a[0]+m >= D){
            cout<<1;
            return 0;
        }
        cout<<-1;
        return 0;
    }
    int cur=0,numref=0,lstref;
    while(cur<n-1){
        lstref = cur;
        while(cur<n-1 && a[cur+1] -a[lstref] <=m){
            cur++;
        }
        if(cur == lstref){
            cout<<-1;
            return 0;
        }
        if(cur != D){
            numref++;
        }
    }
    //cout<<a[lstref]<<endl;
    if(a[lstref]+m < D && a[cur]+m < D){
        cout<<-1;
        return 0;
    }
    if(a[lstref]+m>=D){
        cout<<numref;
        return 0;
    }
    if(a[cur]+m >=D){
        cout<<numref+1;
        return 0;
    }
    cout<<numref;
    return 0;
}

