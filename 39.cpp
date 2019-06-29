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

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int mx=0;
	int ans=0;
	for (int p=1;p<1000;++p){
		int cnt=0;
		for (int a=1;a<=p;++a)
			for (int b=a;b<=p;++b)
				if ((p-a-b)>a && (p-a-b)>b && a*a+b*b==(p-a-b)*(p-a-b))
					++cnt;
		if (cnt>mx){
			mx=cnt;
			ans=p;
		}
	}
	cout << ans;
	return 0;
}