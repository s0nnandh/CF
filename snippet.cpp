#include<bits/stdc++.h>
#define ll long long
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define FOR(i,n) for(int i = 0;i<(n);++i)
#define FORS(i,s,n) for(ll i = (s);i<(n);++i)
using namespace std;
ll C(int n, int k) {
    ll res = 1;
    for (int i = n - k + 1; i <= n; ++i)
        res *= i;
    for (int i = 2; i <= k; ++i)
        res /= i;
    return res;
}
ll fac(ll k){
    ll fact = 1;
    for(int i=1; i<=k; i++)
        fact = fact * i;
    return fact;
}
int n,a,b;
void solve(){	
	cin>>n;	
	vector<int> left,right,L(n),R(n);
	for(int i  =0;i<n;++i){
		cin>>L[i]>>R[i];
		left.push_back(L[i]);
		right.push_back(R[i]);
	}
	sort(left.begin(),left.end());
	sort(right.begin(),right.end());
	int sz = left.size(),ans = left.size()-1,l,r,sum,mid,idx;
	for(int i = 0;i<sz;++i){
		l = 0;r = sz-1;idx = -1;
		while(l<=r){
			mid = l + (r-l)/2;
			if(right[mid]>=L[i]){
				idx = mid;
				r = mid -1;
			}
			else l = mid + 1;
		}
		sum=idx;
		//dbg(sum);
		l = 0;r = sz-1;idx = -1;
		while(l<=r){
			mid = l + (r-l)/2;
			if(left[mid]<=R[i]){
				idx = mid;
				l = mid +1;
			}
			else r = mid - 1;
		}
		sum+=sz-idx-1;
		ans = min(ans,sum);
	}
	cout<<ans<<ln;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    int test=1;
    cin>>test;   
    while(test--)
        solve();
}
