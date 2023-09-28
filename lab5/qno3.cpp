/*Qno3:Write a program to check whether a number is prime or not, with the help of Fermat’s little theorem.*/
/*a^(p-1)---1(mod)p*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int p,status;
	cout<<"Enter a number to check if it is prime or not : ";
	cin>>p;
	for(int i=3;i<=p-1;i++){
		int aToPowerPMinus1=(pow(i,p-1));
		if((aToPowerPMinus1)%p==1){
			cout<<"Fermat's little theorem is true when a="<<i<<endl;
		}
		else{
			cout<<"Fermat's little theorem is false when a="<<i<<endl;
			status=1;
		}
	}
	if(status==1){
		cout<<"Fermat's little theorem proves that "<<p<<" is not a prime number"<<endl;
	}
	else{
		cout<<"Fermat's little theorem proves that "<<p<<" may be a prime number"<<endl;
	}
	return 0;
}


