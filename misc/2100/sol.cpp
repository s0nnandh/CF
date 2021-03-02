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

ll x,y,n;
ll cost(string s){
    ll ones = 0,z = 0;
    ll r = 0;
    for(int i = n-1;i >= 0;--i){
        if(s[i] == '1'){
            r += z*y;
            ++ones;
        }
        else {
            r+= ones*x;
            ++z;
        }
    }  
    return r; 
}
ll comment(string &s,int i){
    rep(j,i,n){
        if(s[j] == '?'){
            string s1 = s,s2 = s;
            s1[j] = '1';s2[j] = '0';
            return min(comment(s1,j+1),comment(s2,j+1));
        }
    }
    return cost(s);
}
void solve(){
    string s;
    cin >> s;
    n = s.size();
    cin >> x >> y;
    cout << comment(s,0);
    ln;
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

