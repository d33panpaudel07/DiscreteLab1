#include<iostream>
using namespace std;

bool LogicalAnd(bool a,bool b){
	return a&&b;
}

bool LogicalOr(bool a,bool b){
	return a||b;
}

bool ImpliesTo(bool a,bool b){
	if(b||!a)
	{
		return true;
	}
	else{
		return false;
	}
}
bool DoubleArrow(bool a,bool b){
	if(a==b){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	bool p[8],q[8],r[8],compP[8],compQ[8];
	bool result1[8],result2[8];
	for(int i=0;i<8;i++){
		if(i<4){
			p[i]=true;
		}
		else{
			p[i]=false;
		}
	}
	for(int j=0;j<8;j++){
		if(j==3||j==2||j==6||j==7){
			q[j]=false;
		}
		else{
			q[j]=true;
		}
	}
	for(int l=0;l<8;l++)
	{
		if(l%2==0)
		{
			r[l]=true;	
		}
		else{
			r[l]=false;
		}
	}
	for(int i=0;i<8;i++){
		if(p[i]==true)
		{
			compP[i]=false;
		}
		else if(p[i]==false)
		{
			compP[i]=true;
		}
	}
	for(int j=0;j<8;j++){
		if(q[j]==true)
		{
			compQ[j]=false;
		}
		else if(q[j]==false)
		{
			compQ[j]=true;
		}
	}
	

	
	
	cout<<" |p \t |q \t |r \t |`p \t |`q \t {p(and)`q(or)r}-->{`p(or)r} \t {p(and)`q(or)r}<-->{`p(or)r}";
	for(int test=0;test<8;test++){
		cout<<endl<<" |"<<p[test]<<" \t |"<<q[test]<<" \t |"<<r[test]<<" \t |"<<compP[test]<<" \t |"<<compQ[test]<<" \t |"<<ImpliesTo(LogicalOr(LogicalAnd(p[test],compQ[test]),r[test]),LogicalOr(compP[test],r[test]))<<" \t\t\t\t |"<<DoubleArrow(LogicalOr(LogicalAnd(p[test],compQ[test]),r[test]),LogicalOr(compP[test],r[test]));
	}
}
