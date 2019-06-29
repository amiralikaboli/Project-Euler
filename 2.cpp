#include <iostream>

using namespace std;

int main(){
	long long ans=0;
	int a=1,b=2;
	while (b<4*1000*1000){
		int x=a,y=b;
		if (b%2==0)
			ans+=b;
		a=y;
		b=x+y;
	}
	cout << ans;
}