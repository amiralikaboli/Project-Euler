#include <bits/stdc++.h>

using namespace std;

int main(){
	int mx=0;
	double ans=-1;
	int ind=1;
	double n,k;
	for (int ind=1;ind<=1000;++ind){
		cin >> n >> k;
		if (log(n)*k>mx){
			ans=ind;
			mx=log(n)*k;
		}
	}
	cout << ans;
}