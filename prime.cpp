#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a=2;
	while(a<n){
		if(n%a==0){
			cout<<"number is not prime";
			return 0;
		}
		a++;
		
	}
	cout<<"number is a prime";
}
