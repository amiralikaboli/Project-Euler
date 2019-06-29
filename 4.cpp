#include <iostream>
#include <vector>

using namespace std;

vector <int> v;

bool palidrome(int n){
	v.clear();
	int x=n;
	while (x!=0){
		v.push_back(x%10);
		x/=10;
	}
	for (int i=0;i<v.size()/2;++i)
		if (v[i]!=v[v.size()-i-1])
			return false;
	return true;
}

int main (){
	int mx=0;
	for (int i=999;i>=100;--i)
		for (int j=999;j>=100;--j)
			if (palidrome(i*j)==true)
				mx=max(mx,i*j);
	cout << mx;
}