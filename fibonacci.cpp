#include <iostream>

using namespace std;

int main (){
	int n;
	cin>>n;
	int a=0,b=1;
	while (a<=n){
		cout<<a<<" ";
		int s=a+b;
		a=b;
		b=s;
	}
}


