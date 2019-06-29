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

const int MaxN=1E6+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int t[10][10];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}
int lg(int n,int k=10){ int x=n,cnt=0; while (x){ ++cnt; x/=k;} return cnt;}

void findDigit(int n,int k){
	n*=k;
	fill(t[k],t[k]+10,0);
	while (n){
		++t[k][n%10];
		n/=10;
	}
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	cerr << fixed << setprecision(12);
	for (int i=1; ;++i){
		findDigit(i,2);
		findDigit(i,3);
		findDigit(i,4);
		findDigit(i,5);
		findDigit(i,6);
		bool b=true;
		for (int j=3;j<=6;++j)
			for (int l=0;l<10;++l)
				if (t[2][l]!=t[j][l])
					b=false;
		if (b){
			cout << i;
			return 0;
		}
	}
	return 0;
}