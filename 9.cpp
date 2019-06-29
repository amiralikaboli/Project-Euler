#include <iostream>

using namespace std;

int main (){
	for (int i=0;i<=1000;++i)
		for (int j=0;j<=1000-i;++j){
			int l=1000-i-j;
			if (i*i==j*j+l*l){
				cout << i*j*l;
				return 0;
			}
		}
}