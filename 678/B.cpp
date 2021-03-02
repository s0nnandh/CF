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
bool prime(int n){
    if(n == 1)return false;
    for(int i = 2;i*i <= n;++i){
        if(n%i == 0)return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    int k = n;
    n = 1;
    while(1){
        if(!prime(n) && prime(k-1+n)){
            vector<vector<int>> ans(k,vector<int> (k,1));
            rep(i,0,k){
                ans[i][i] = n;
            }
            rep(i,0,k){
                rep(j,0,k){
                    cout << ans[i][j] << " ";
                }
                ln;
            }
            return;
        }
        ++n;
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

// HAVE MAX NUMBER OF ONES ..