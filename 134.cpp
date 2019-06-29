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

const int MaxN=1E6+1E4;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
bool mark[MaxN];
vector <int> prime;
int t[20];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}
int lg(int n,int k=10){ int x=n,cnt=0; while (x){ ++cnt; x/=10;} return cnt;}


int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	t[0]=1;
	for (int i=1;i<=10;++i)
		t[i]=t[i-1]*10;
	int n;
	cin >> n;
	for (int i=2;i<=n;++i){
		if (mark[i])
			continue;
		if (i>=5)
			prime.pb(i);
		for (int j=2*i;j<=n+1000;j+=i)
			mark[j]=true;
	}
	int ind=n+1;
	while (mark[ind])
		++ind;
	prime.pb(ind);
	int ans=0;
	for (int i=0;i<prime.size()-1;++i){
		int p1=prime[i];
		int p2=prime[i+1];
		int l=lg(p1);
		int r=(p2-p1)*bpow(10,l*(p2-2),p2);
		r%=p2;
		ans+=t[l]*r+p1;
	}
	cout << ans;
	return 0;
}