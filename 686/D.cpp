#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define for(i,s,n) for(ll i = (s);i<(n);++i)
using namespace std;
int max_p = 0,f = -1;
vector<int> factors;
void prime_fact(ll n){
    for(i,2,sqrt(n)+1){
        int p = 0;
        if(n%i == 0)factors.push_back(i);
        while(n%i == 0 && n > 0){
            n/=i;
            ++p;
            if(p>max_p){
                max_p = p;
                f = i;
            }
        }
    }
    if(n!=0)factors.push_back(n);
}
void solve(){ 
    factors.clear();
    max_p = 0;
    f =  -1;   
    ll n;
    cin>>n;
    prime_fact(n);
    if(f == -1){
        cout<<1;ln;
        cout<<n;
    }
    else{
        ll a = 1;
        cout<<max_p;ln;
        for(i,0,max_p-1){
            cout<<f<<" ";
            a*=f;
        }
        cout<<n/a;
    }
    ln;
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

//MAX SEQUENCE IS ONLY POSSIBLE WITH THE MAX EXPONENT OF A PRIME FACTOR
// OF N.