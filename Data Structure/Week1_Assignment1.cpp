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
void solve(){
    stack<char> s;
    string sg;
    cin>>sg;
    vi v;
    for(int i=0; i<sg.length(); i++){
        if(sg[i] == '('){
            s.push('(');
            //cout<<"h\n";
           }
        else if(sg[i] == '{'){
            s.push('{');
        }
        else if(sg[i] == '['){
            s.push('[');
            //cout<<"i\n";
        }
        else if(sg[i] == ')'){
            char tp = s.top();
            if(tp != '('){
                v.pb(i+1);
                //cout<<"j\n";
            }
            else{
                s.pop();
                //cout<<"k\n";
            }
        }
        else if(sg[i] == '}'){
            char f = s.top();
            if(f != '{'){
                v.pb(i+1);
            }
            else{
                s.pop();
            }
        }
        else if(sg[i] == ']'){
            char t = s.top();
            if(t != '['){
                v.pb(i+1);
                //cout<<"l\n";
            }
            else{
                s.pop();
                //cout<<"m\n";
            }
        }
    }
    if(s.empty()){
        cout<<"Success";
        return;
    }
    if(v.size() == 0) v.pb(1);
    debv(v);
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

