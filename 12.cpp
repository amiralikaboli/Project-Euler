#include <iostream>
#include <cmath>

using namespace std;

int mq(int n){
	int cnt=0;
	for (int i=1;i<sqrt(n);++i)
		if (n%i==0)
			cnt+=2;
		++cnt;
	return cnt;
}

int main (){
	for (int i=2; ;++i)
		if (mq(i*(i-1)/2)>500){
			cout << i*(i-1)/2;
			return 0;
		}
}