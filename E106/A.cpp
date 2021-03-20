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
        
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    int w,b;
    cin >> w >> b;
    int ww = min(k1,k2),bb = min(n-k1,n-k2);
    string ans = "NO";
    int k = abs(k1-k2);    
    if(w <= ww && b <= bb){
        cout << "YES";
        ln;
        return;
    }
    w-=ww;b-=bb;
    if(k >= 2*w && k >= 2*b){
        cout << "YES";
        ln;
        return;
    }
    cout << "NO";ln;
    return;

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

