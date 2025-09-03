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
    ll n, m;    cin>>n>>m;
    ll s=1, d=n;    //cin>>s>>d;
    vector<ll> adj[n+1];
    for(ll i=0 ; i<m ; i++){
        ll u, v;    cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> p(n+1, -1);
    vector<ll> dist(n+1, inf);
    queue<ll> q;
    q.push(s);
    dist[s]=0;
    while(!q.empty()){
        ll u= q.front();
        q.pop();
        for(ll v: adj[u]){
            if(dist[v]==inf){
                q.push(v);
                p[v]=u;
                dist[v]=dist[u]+1;
            }
        }
    }
    if(dist[d]==inf){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        //cout<<dist[d]<<endl;
        vector<ll> path;
        path.push_back(d);
        ll cur= d;
        while(p[cur]!=-1){
            path.push_back(p[cur]);
            cur= p[cur];
        }
        cout<<path.size()<<endl;
        for(ll i=path.size()-1 ; i>=0 ; i--) cout<<path[i]<<' ';
        cout<<endl;
    }
}

int main()
{
    //file_input();
    fastIO;
    solve();
}

