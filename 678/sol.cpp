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

const int m = 1e9 + 7;
ll fac(ll k){
    ll fact = 1;
    for(int i=1; i<=k; i++)
        fact = (fact * i)%m;
    return fact;
}
void solve(){
    int n,x,pos;
    cin >> n >> x >> pos;
    ll ans = 1;
    int l = 0,r = n,small = x-1,big = n-x;
    int mid = (l+r)/2;
    ll cnt = n;
    while(l < r){
        mid = (l + r)/2;
        if(pos == mid){
            l = mid + 1;
        }
        else if(pos > mid){
            l = mid + 1;
            ans = ( ans * small ) % m;
            --small;
        }
        else{
            r = mid;
            ans = ( ans * big) % m;
            --big;
        }
        --cnt;
    }
    if(cnt > 0)ans = (ans * fac(cnt))%m;
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

