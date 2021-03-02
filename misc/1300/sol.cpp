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
    vector<int> v(n);
    int first = -1,last = 0;
    rep(i,0,n){
        cin>>v[i];
        if(v[i] == 1){
            if(first == -1)first = i;
            last = i;
        }
    }
    if(first == -1){
        cout<<0;ln;
        return;
    }
    ll  ans = 1;
    rep(i,first,last+1){
        int z = 0,j = i+1;
        while(j<last+1 && v[j] == 0){
            ++j;
            ++z;
        }
        i = j-1;
        ans*=(z+1);
    }
    cout<<ans;ln;
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

