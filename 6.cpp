#include <iostream>

using namespace std;

int main (){
	int ans=0,cnt=0;
	for (int i=1;i<=100;++i){
		ans+=i*i;
		cnt+=i;
	}
	cout << cnt*cnt-ans;
}