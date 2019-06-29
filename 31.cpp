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

const int MaxN=2E6+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=10*1000*1000*1000LL;
int dp[250][20];
int coin[10]={1,2,5,10,20,50,100,200};


int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}
int lg(int n,int k=10){ int x=n,cnt=0; while (x){ ++cnt; x/=k;} return cnt;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	cerr << fixed << setprecision(12);
	for (int i=1;i<=200;++i)
		dp[i][0]=1;
	for (int i=0;i<=7;++i)
		dp[0][i]=1;
	for (int i=1;i<=200;++i)
		for (int j=1;j<=7;++j){
			dp[i][j]+=dp[i][j-1];
			for (int l=1;l<=i/coin[j];++l)
				dp[i][j]+=dp[i-l*coin[j]][j-1];
		}
	cout << dp[200][7];
}