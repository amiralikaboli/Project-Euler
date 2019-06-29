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

const int MaxN=1E9+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=105167*105167LL;
bool mark[MaxN];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n=1000000;
	vector <int> p;
	for (int i=2;i<=n;++i)
		if (!mark[i]){
			p.pb(i);
			for (int j=2*i;j<=n;j+=i)
				mark[j]=true;
		}
	for (int i=0;i<p.size();++i){
		int delta=1LL*p[i]*p[i];
		int ans1=1,ans2=1;
		for (int j=0;j<=i;++j){
			ans1*=p[i]-1;
			ans2*=p[i]+1;
			ans1%=delta;
			ans2%=delta;
		}
		if ((ans1+ans2)%delta>1E10){
			cout << i+1;
			return 0;
		}
	}
	return 0;
}