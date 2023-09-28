/*Qno1: Write a program to calculate a^n*/
#include<iostream>
using namespace std;

int recursionfunction(int x,int y){
	if(y==0){
		return 1;
	}
	else{
		return x * recursionfunction(x,y-1);
	}
}

int main(){
	int a,n;
	cout<<"Enter 2 values in form of a^n : "<<endl;
	cout<<"a = ";
	cin>>a;
	cout<<"n = ";
	cin>>n;
	cout<<"The result is : "<<recursionfunction(a,n);
	return 0;
}
