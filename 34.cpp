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

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

bool prcs(int n){
	int x=n;
	int sum=0;
	while (x){
		sum+=fact(x%10);
		x/=10;
	}
	return (sum==n);
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int ans=0;
	for (int i=10;i<1E7;++i)
		if (prcs(i)){
			cerr << i << " ";
			ans+=i;
		}
	cout << endl << ans;
	return 0;
}