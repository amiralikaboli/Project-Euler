#include <iostream>

using namespace std;

int a[22][22];

int main (){
	for (int i=0;i<20;++i)
		for (int j=0;j<20;++j)
			cin >> a[i][j];
	long long ans=0;
	for (int i=0;i<20;++i)
		for (int j=0;j<17;++j){
			long long cnt=1;
			for (int l=0;l<4;++l)
				cnt*=a[i][j+l];
			ans=max(ans,cnt);
		}
	for (int i=0;i<20;++i)
		for (int j=0;j<17;++j){
			long long cnt=1;
			for (int l=0;l<4;++l)
				cnt*=a[j+l][i];
			ans=max(ans,cnt);
		}
	for (int i=0;i<17;++i)
		for (int j=0;j<17;++j){
			long long cnt=1;
			for (int l=0;l<4;++l)
				cnt*=a[i+l][j+l];
			ans=max(ans,cnt);
		}
	for (int i=3;i<20;++i)
		for (int j=0;j<17;++j){
			long long cnt=1;
			for (int l=0;l<4;++l)
				cnt*=a[i-l][j+l];
			ans=max(ans,cnt);
		}
	cout << ans;
}