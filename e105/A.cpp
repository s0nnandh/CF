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

int n;
bool valid(string s){
    stack<int> op,cl;
    rep(i,0,n){
        if(s[i] == '(')op.push(i);
        else cl.push(i);
    }
    while(!cl.empty()){
        if(op.empty())return false;
        if(op.top() > cl.top())return false;
        op.pop();cl.pop();
    }
    if(!cl.empty() || !op.empty())return false;
    return true;
}

void solve(){
    string s;
    cin >> s;
    n = s.size();
    char st,end;
    st = s[0];end = s[n-1];
    string t1 = s,t2 =  s;
    rep(i,0,n){
        if(s[i] == st){
            t1[i] = '(';
            t2[i] = '(';
        }
        else if(s[i] == end){
            t1[i] = ')';
            t2[i] = ')';
        }
    }
    rep(i,0,n){
        if(t1[i] != '(' && t1[i] != ')')t1[i] = '(';
    }
    rep(i,0,n){
        if(t2[i] != '(' && t2[i] != ')')t2[i] = ')';
    }
    //cout << t1 << " " << t2;ln;
    cout << (valid(t1) || valid(t2)?"YES":"NO");ln;

    //cout << ans;ln;
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
