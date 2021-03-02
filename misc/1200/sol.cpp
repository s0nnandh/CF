#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    string s;;
    cin>>s;
    int n = s.size();int first = -1,last = 0;ll ones = 0;
    vector<int> v;
    rep(i,0,n){
        if(i == 0){
            v.push_back(s[i]-'0');
            if(v[0] == 1)ones++;
        }
        else{
            if(s[i] == '1'){
                ones++;
                if(v[v.size()-1] != 1)v.push_back(1);
            }
            else v.push_back(0);
        }
    }
    ll z = last-first+1 - ones;
    ll ans = min(z*b + a,ones*a);
    cout<<ans;ln;

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