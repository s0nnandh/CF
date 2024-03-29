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
        
    string s;
    cin >> s;
    int n = s.size();
    rep(i,0,n+1){
        bool pos = 1;
        rep(j,0,i){
            if(j+1 < n){
                if(s.substr(j,2) == "11"){
                    pos = 0;
                    break;
                }
            }
        }
        if(!pos)continue;
        rep(j,i,n){
            if(j+1 < n){
                if(s.substr(j,2) == "00"){
                    pos = 0;
                    break;
                }
            }
        }
        if(pos){
            cout << "YES";ln;
            return;
        }
    }
    cout << "NO";ln;
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

