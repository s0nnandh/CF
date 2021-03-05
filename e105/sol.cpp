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
    int n,u,r,d,l;
    //vector<vector<int>> v(2,vector<int> (2));
    cin >> n >> u >> r >> d >> l;
    if(u < n-2 && d < n-2 && r < n-2 && l < n-2){
        cout << "YES";ln;
        return;
    }
    vector<vector<int>> ans(n,vector<int> (n));
    vector<int> v(4);
    // rep(i,0,4){
    //     if(v[i] > n){
    //         cout << "NO";
    //         ln;
    //         return;
    //     }
    // }
    v[0] = u;v[1] = r;v[2] = d;v[3] = l;
    rep(i,0,4){
        if(v[i] == 0){
            int b = (i+2)%4,f = (i+2)%4,k = (i+2)%4;
            b--;++f;
            if(k == 0)b = 3;
            if(k == 3)f = 0;   
            if(v[k] == 1){
                //dbg(b,f);
                if(v[b] + v[f] > (2*n) - 3){
                    cout << "NO";
                    ln;
                    return; 
                }
            }
            else if(v[k] == 0){
                if(v[b] + v[f] > (2*n) - 4){
                    cout << "NO";
                    ln;
                    return; 
                }
            }  
            else{
               if(v[b] + v[f] > (2*n) - 2){
                    cout << "NO";
                    ln;
                    return; 
                } 
            }                
        }
    }
    rep(i,0,4){
        if(v[i] == 1){
            int b = (i+2)%4,f = (i+2)%4,k = (i+2)%4;
            b--;++f;
            if(k == 0)b = 3;
            if(k == 3)f = 0;   
            if(v[k] == 1){
                //dbg(b,f);
                if(v[b] + v[f] > (2*n) - 2){
                    cout << "NO";
                    ln;
                    return; 
                }
            }
            else if(v[k] == 0){
                if(v[b] + v[f] > (2*n) - 3){
                    cout << "NO";
                    ln;
                    return; 
                }
            }  
            else{
               if(v[b] + v[f] == (2*n)){
                    cout << "NO";
                    ln;
                    return; 
                } 
            }                
        }
    }
    cout << "YES";ln;
    
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