#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define DEBUG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> r(n);
    rep(i,0,n)cin>>r[i];
    int m;cin>>m;
    vector<int> b(m);
    rep(i,0,m)cin>>b[i];
    int ans1 = max(r[0],0),ans2 = max(b[0],0);
    rep(i,1,n){
        r[i]+=r[i-1];
        ans1 = max(ans1,r[i]);
    }
    //a = 0;
    rep(i,1,m){
        b[i]+=b[i-1];
        ans2 = max(ans2,b[i]);
    }
    cout<<ans1 + ans2;ln;
    
}   


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    int test=1;
    cin>>test;   
    while(test--)
        solve();
    return 0;
}

