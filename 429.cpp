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

const int MaxN=1E8+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+9;
bool mark[MaxN];
vector <int> prime;
int t[MaxN];

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
	for (int i=2;i<=n;++i)
		if (!mark[i]){
			int ind=prime.size();
			prime.pb(i);
			t[ind]=1;
			for (int j=2*i;j<=n;j+=i){
				mark[j]=true;
				int cnt=j;
				while(cnt%prime.back()==0){
					++t[ind];
					cnt/=prime.back();
				}
			}
		}
	int ans=1;
	for (int i=0;i<prime.size();++i){
		ans*=bpow(bpow(prime[i],t[i]),2)+1;
		ans%=MOD;
	}
	cout << ans;
	return 0;
}