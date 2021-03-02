#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
using namespace std;
int n;
void solve(){
    cin>>n;
    vector<int> a(n);ll od = 0,ev = 0,s = 0;
    rep(i,0,n){
        cin>>a[i];
        if(i&1)ev+=a[i];
        else od+=a[i];
        s+=a[i];
    }   
    if(ev<=s/2){
        rep(i,0,n){
            if(i&1)cout<<1<<" ";
            else cout<<a[i]<<" ";
        }
    }
    else {
        rep(i,0,n){
            if(!(i&1))cout<<1<<" ";
            else cout<<a[i]<<" ";
        }
    }ln;
    
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

// find the array sum .