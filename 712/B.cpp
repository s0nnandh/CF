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

#define pi pair<int,int>

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    int o = 0,z = 0;
    rep(i,0,n){
        if(s[i] == '0')++z;
        else ++o;
    }
    if(o != z || s[0] != 1 || s[n-1] != 1){
        cout << "NO";
    }
    else{
        cout << "YES";ln;
        bool par = 1;
        string a = "",b = "";
        rep(i,0,n){
            if(par){
                if(s[i] == '1'){
                    a+='(';
                    b+='(';
                }
                else{
                    a+='(';
                    b+=')';
                }
            }
            else{
                if(s[i] == '1'){
                    a+=')';
                    b+=')';
                }
                else{
                    a+=')';
                    n+='(';
                }
            }
            par = !par;
        }
        cout << a;ln;
        cout << b;
    }
    
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

