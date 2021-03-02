#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define DEBUG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
#define pc(x) __builtin_popcount(x)
using namespace std;

void solve(){
    int n;
    cin>>n;
    ll k = n-1;
    vector<pair<int,int>> v;
    while(k>2){
        //cout<<k<<" "<<n;ln;
        if(k*k == n ){            
            v.push_back({n,k});
            v.push_back({n,2});
            n = k;
        }       
        else v.push_back({k,n});
        --k;
    }
    int x = n;
    while(n != 1){
        if(n&1)n = (n/2) + 1;
        else n/=2;
        //dbg(n);ln;
        v.push_back({x,2});
    }
    int sz = v.size();
    cout<<sz;ln;
    rep(i,0,sz){
        cout<<v[i].first<<" "<<v[i].second;
        ln;
    }

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

