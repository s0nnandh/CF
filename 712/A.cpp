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
    bool pos = 1;
    rep(i,0,n){
        if(s[i] != 'a'){
            pos = 0;
            break;
        }
    }
    if(pos){
        cout << "NO";
    }
    else if(s[0] != 'a' && s[n-1] != 'a'){
        cout << "YES";ln;
        cout << s + 'a' ;
    } 
    else{
        cout << "YES";ln;
        int c1 = 0,c2 = 0;
        rep(i,0,n){
            if(s[i] != 'a')break;
            ++c1;
        }
        for(int i = n-1;i >= 0;--i){
            if(s[i] != 'a')break;
            ++c2;
        }
        if(c1 >= c2){
            cout << 'a' + s;
        }
        else cout << s + 'a';
    }
    ln;
    

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

