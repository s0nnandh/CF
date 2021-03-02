#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define DEBUG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    // stack<int> open,q;bool ans = true;
    // rep(i,1,n+1){
    //     if(s[i-1] == '('){
    //         open.push(i);
    //     }
    //     else if(s[i-1] == '?'){
    //         q.push('?');
    //     }
    //     else if(s[i-1] == ')'){
    //         if(!open.empty()){
    //             open.pop();
    //         }
    //         else if(!q.empty()){
    //             q.pop();
    //         }
    //         else {
    //             ans = 0;
    //             break;
    //         }
    //     }
    //     if(ans == 0)break;
    // }
    // if(!ans)cout<<"NO";
    // else{
    //     while(!open.empty()){
    //         if(!q.empty()){
    //             if(q.top() > open.top()){
    //                 q.pop();
    //                 open.pop();
    //             }
    //             else{
    //                 cout<<"NO";ln;
    //                 return;
    //             }
    //         }
    //         else{
    //             cout<<"NO";ln;
    //             return;
    //         }
    //     }
    //     if(q.size()%2 == 0){
    //     cout<<"YES";}
    //     else {
    //         cout<<"NO";
    //     }
    // }
    // ln;
    string ans = "YES";
    if(s[0] == ')' || s[n-1] == '(')ans = "No";
    if(s.size()&1)ans = "NO";
    cout<<ans;ln;
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

