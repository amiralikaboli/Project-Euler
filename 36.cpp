#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
vector <int> v;

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

bool check(int n,int k){
	int x=n;
	v.clear();
	while (x){
		v.pb(x%k);
		x/=k;
	}
	for (int i=0;i<v.size();++i)
		if (v[i]!=v[v.size()-1-i])
			return false;
	return true;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int ans=0;
	for (int i=1;i<1000000;++i)
		if (check(i,2) && check(i,10)){
			ans+=i;
			cerr << i << " ";
		}
	cout << endl << ans;
	return 0;
}