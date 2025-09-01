/* To win, you must first know how to lose. */

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5, mod = 1e9 + 7;
const long long inf = 1e18;
#define all(c) c.begin(), c.end()
#define allr(a) a.rbegin(),a.rend()
#define debug(x) cout << '>' << #x << " : " << x << endl;

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef unsigned long long ull;
typedef long long ll;


void file_input() {
  freopen(".in","r",stdin);
  freopen(".out","w",stdout);
}


void solve(){
    ll n;   cin>>n;
    ll ans=1;
    for(ll i=1 ; i<=n ; i++){
        ans= (ans%mod * 2) % mod;
    }
    cout<<ans<<endl;
}

int main()
{
    //file_input();
    fastIO;
    solve();
}

