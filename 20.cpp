#include <iostream>

using namespace std;

int a[1111];

int main (){
	a[0]=1;
	int n;
	cin >> n;
	for (int i=2;i<=n;++i){
		int cnt=0;
		for (int j=0;j<1111;++j){
			a[j]*=i;
			a[j]+=cnt;
			cnt=a[j]/10;
			a[j]%=10;
		}
	}
	int ans=0;
	for (int i=0;i<1111;++i)
		ans+=a[i];
	cout << ans;
}