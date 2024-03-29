#include<bits/stdc++.h>
#include<stdio.h>
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


void solve(){
        
    ll n;
    cin >> n;
    vector<ll> c(n);
    rep(i,0,n)cin >> c[i];
    set<ll> s;
    s.insert(c[0]);s.insert(c[1]);
    ll ans = n*c[0] + n*c[1];
    
    dbg(ans,c[0],c[1]);
    rep(j,2,n){
        int i = j-1;
        s.insert(c[j]);
        ll sum = 0,cnt = 0;
        for(auto x : s){
            if(cnt == 0){
                sum+=(n-(i/2))*x;
                dbg(n-(i/2));
            }
            else if(cnt == 1){
                sum+=(n - ((i+1)/2))*x;
                dbg((n - ((i+1)/2)));
            }
            else sum+=x;
            ++cnt;
        }
        ans = min(ans,sum); 
        dbg(j,sum);       
    }
    cout << ans;ln;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    //gen_factorial(1e6);   
    int test=1;
    cin>>test;   
    while(test--)
        solve();
    return 0;
}

