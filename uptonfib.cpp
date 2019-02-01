# include <iostream>
using namespace std;

int main (){
	int n;
	cin>> n;
	int a=0,b=1,cnt=1;
	while (cnt<=n){
		cout<<a<<" ";
		int s=a+b;
		a=b;
		b=s;
		cnt++;
		
	}
	
}
