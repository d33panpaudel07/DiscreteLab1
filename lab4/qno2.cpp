/*Qno2:Write a program to calculate b^n mod m.*/
#include<iostream>
using namespace std;

int powerFunction(int x,int y){
	if(y==0){
		return 1;
	}
	else{
		return x * powerFunction(x,y-1);
	}
}
int floorFunction(int x){
	return x/2;
}
int recursiveModularExponentation(int b,int n,int m){
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		return (recursiveModularExponentation(b,n/2,m) * recursiveModularExponentation(b,n/2,m))%m;
	}
	else{
		return ((recursiveModularExponentation(b,floorFunction(n/2),m) * recursiveModularExponentation(b,floorFunction(n/2),m))%m*(b%m))%m;
	}
}

int main(){
	int a,n,m;
	cout<<"Enter 3 values in form of a^n mod m : "<<endl;
	cout<<"a = ";
	cin>>a;
	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;
	cout<<"The result is : "<<recursiveModularExponentation(a,n,m);
	
	return 0;
}
