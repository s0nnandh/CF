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
    cin >> n;
    vector<int> a(n),b(n);
    for(auto& i : a)cin >> i;
    rep(i,0,n){
        cin >> b[i];
        a[i]-=b[i];
    }  
    //rep(i,0,n)cout << a[i] << " ";
    //ln;
    int ans = 0; 
    rep(i,0,n){
        rep(j,i+1,n){
            if(a[i] > (-a[j]))++ans;
        }
    }
    cout << ans;ln;
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

