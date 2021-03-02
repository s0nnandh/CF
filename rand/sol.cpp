#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
using namespace std;
//#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define pc(x) __builtin_popcount(x)
void DBG() {
	cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
    //cerr << '[' << endl;
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) cerr << "[ ]" << endl
#endif
 
void dfs(vector<ll> &cost,vector<bool> &visited,vector<vector<int>> &adj,int u,ll sum){
    if(!visited[u]){
        visited[u] = 1;
        cost[u]+=sum;
        for(auto x : adj[u]){
            dfs(cost,visited,adj,x,cost[u]);
        }
    }
}
void solve(){   
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<pair<int,int>> edges(n+1);
    rep(i,1,n){
        int a,b;
        cin >> a >> b;
        edges[i] = {a,b};
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<ll> cost(n+1);
    int q;
    cin >> q;
    rep(i,0,q){
        int a,b,x;
        cin >> a >> b >> x;
        int k;
        if(a == 1)k = edges[b].second;
        else k  = edges[b].first;
        if(k == 1){
            k = edges[b].second;
            cost[k]+=x;
            cost[1]-=x;
        }
        else{
            cost[1]+=x;
            cost[k]-=x;
        }
    }
    vector<bool> vis(n+1);
    dfs(cost,vis,adj,1,0);
    rep(i,1,n+1){
        cout << cost[i];ln;
    }

}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    int test=1;
    //cin>>test;   
    while(test--)
        solve();
    return 0;
}