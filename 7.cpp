#include <iostream>

using namespace std;

bool prime(long long n){
	for (long long i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}

int main (){
	int cnt=0;
	for (int i=2; ;++i){
		cnt+=prime(i);
		if (cnt==10001){
			cout << i;
			return 0;
		}
	}
}