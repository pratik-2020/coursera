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
    if(a<=b && a<=c){
        return a;
    }
    if(b <= a && b<=c){
        return b;
    }
    return c;
}
void solve(){
    string s,t;
    cin>>s>>t;
    int n = s.length(), m=t.length();
    int d[n+1][m+1];
    for(int i=0; i<=n; i++){
        d[i][0] = i;
    }
    for(int i=0; i<=m; i++){
        d[0][i] = i;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            d[i][j] = minm(d[i-1][j]+1, d[i][j-1]+1,d[i-1][j-1]+(s[i-1] == t[j-1]?0:1));
        }
    }
    /*for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<d[n][m];
}
int min(int x, int y, int z) { return min(min(x, y), z); }
int editDist(string str1, string str2, int m, int n)
{
    // If first string is empty, the only option is to
    // insert all characters of second string into first
    if (m == 0)
        return n;

    // If second string is empty, the only option is to
    // remove all characters of first string
    if (n == 0)
        return m;

    // If last characters of two strings are same, nothing
    // much to do. Ignore last characters and get count for
    // remaining strings.
    if (str1[m - 1] == str2[n - 1])
        return editDist(str1, str2, m - 1, n - 1);

    // If last characters are not same, consider all three
    // operations on last character of first string,
    // recursively compute minimum cost for all three
    // operations and take minimum of three values.
    return 1
           + min(editDist(str1, str2, m, n - 1), // Insert
                 editDist(str1, str2, m - 1, n), // Remove
                 editDist(str1, str2, m - 1,
                          n - 1) // Replace
             );
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //cout<<editDist("shorts","ports",6,5);
    return 0;
}

