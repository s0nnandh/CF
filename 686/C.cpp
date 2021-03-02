#include<bits/stdc++.h>
#define ll long long
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define FOR(i,n) for(int i = 0;i<(n);++i)
#define FORS(i,s,n) for(ll i = (s);i<(n);++i)
using namespace std;
int n;int sz = 200000,num;
void solve(){ 
    cin>>n;int a;
    vector<int> v;
    for(int i = 0;i<n;++i){
        cin>>a;
        if(i == 0)v.push_back(a);
        else{
            if(v[v.size()-1]!=a)v.push_back(a);
        }
    }
    map<int,int> mp;
    for(int i = 0;i<v.size();++i){
        mp[v[i]]++;
    }
    sz = 2000000;
    mp[v[0]]--;
    mp[v[v.size()-1]]--;
    for(auto x : mp){
       // dbg(x.second);
        sz  = min(sz,(x.second)+1);
    }
    cout<<sz<<ln;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}

// CONSIDER GROUP OF SAME ELEMENTS AS A BLOCK
// EXAMPLE 2 2 1 3 3 3 2 -> 2 1 3 2  
// Now, the answer for each ai is almost the number of its 
//occurrences plus one. Why is it so? Because we need to remove
// all segments of elements between every pair of consecutive
// occurrences of ai. The number of such segments is the number
// of occurrences of ai minus one. There is also a segment before 
//the first occurrence of ai and a segment after the last occurrence of ai. But the first segment doesn't exist for the first element and the last segment doesn't exist for the last element.

//So, after removing consecutive elements, let's calculate for each ai the number of its occurrences plus one, subtract one from the value of the first element and from the value of the last element. Then the answer is the minimum among these values for all ai.