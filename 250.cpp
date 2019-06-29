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

const int MaxN=250250+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=10LL*1000*1000*1000*1000*1000;
int dp[MaxN][250+10];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	dp[1][1]=1;
	for (int i=2;i<=n;++i){
		dp[i][bpow(i,i,250)]=1;
		for (int j=0;j<250;++j){
			dp[i][j]+=dp[i-1][j]+dp[i-1][(j-bpow(i,i,250)+250)%250];
			dp[i][j]%=MOD;
		}
	}
	cerr << dp[n][0];
	return 0;
}