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

const int MaxN=1E4+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
set <int> st[MaxN];
int sdv[MaxN];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==1) return 1; return n*fact(n-1);}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

void prcs(int n){
	int sum=0;
	for (int i=1;i<n;++i)
		if (n%i==0)
			sum+=i;
	sdv[n]=sum;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		prcs(i);
	int ans=0;
	for (int i=1;i<=n;++i)
		if (sdv[i]<=n && sdv[sdv[i]]==i && sdv[i]!=i)
			ans+=i;
	cout << ans;
	return 0;
}