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
int per[]={0,1,2,3,4,5,6,7,8,9};

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==1) return 1; return n*fact(n-1);}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	for (int i=1;i<1000*1000;++i)
		next_permutation(per,per+10);
	for (int i=0;i<10;++i)
		cout << per[i];
	return 0;
}