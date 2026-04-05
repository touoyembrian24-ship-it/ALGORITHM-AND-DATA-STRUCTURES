#include<iostream>
using namespace std;

bool isPrime(int num){
	if(num<=1)
	return false;
	
	for(int i=2;i*i<=num;i++){
		if(num % i==0)
		return false;
	}
	return true;
}

void displayprimes(int n){
	for(int i=1;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<"";
		}
	}
}

int main(){
	int n;
	cout<<"Enter any number:";
	cin>> n ;
	cout<<"Prime numbers fron 1 to "<<n<<"are:\n";
	displayprimes(n);
	return 0;
}