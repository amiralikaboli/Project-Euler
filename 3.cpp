#include <iostream>

using namespace std;

bool prime(long long n){
	for (long long i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}

int main (){
	for (long long i=776000; ;--i)
		if (prime (i)==true && 600851475143ll%i==0){
			cout << i;
			return 0;
		}
}