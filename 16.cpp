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

const int MaxN=1000+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int d[MaxN];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	d[0]=1;
	for (int t=0;t<n;++t){
		for (int i=0;i<MaxN;++i)
			d[i]*=2;
		for (int i=0;i<MaxN-1;++i){
			d[i+1]+=d[i]/10;
			d[i]%=10;
		}
	}
	int ans=0;
	for (int i=0;i<MaxN;++i)
		ans+=d[i];
	cout << ans;
	return 0;
}