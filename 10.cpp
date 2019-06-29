#include <iostream>

using namespace std;

bool prime(long long n){
	if (n==1)
		return false;
	for (long long i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}

int main (){
	long long ans=0;
	for (int i=1;i<2*1000*1000;++i)
		if (prime(i)==true)
			ans+=i;
	cout << ans;
}