/*Qno1:Write a program to represent graph and test it properties. Take the graphs in
the following figure as a sample.*/
#include<iostream>
using namespace std;

int main()
{
	int vertices;
	cout<<"Enter number of vertices : ";
	cin>>vertices;
	int mat[vertices][vertices];
	int i,j;


	for(char x='A';x<'A'+vertices;x++){
		j=0;
		for(char y='A';y<'A'+vertices;y++){
			char uin=0;
			cout<<"Is "<<x<<" connected to "<<y<<"? (y,n) : ";
			cin>>uin;
			if(uin == 'y' || uin == 'Y'){
				mat[i][j]=1;
				j++;
			}
			else{
				mat[i][j]=0;
				j++;
			}
		}
		i++;
	}
	for(int i=0;i<vertices;i++){
		char point1=65+i;
		cout<<" "<<point1;
		if(i==vertices-1){
			cout<<endl;
		}
	}
	for(int i=0;i<vertices;i++){
		char point2=65+i;
		cout<<point2<<" ";
		
		for(int j=0;j<vertices;j++){
			cout<<mat[i][j]<<" ";
			if(j==vertices-1){
				cout<<endl;
			}
		}
	}
}
/*yo code le jun pani graph lai adjacency matrix form ma store chai garna sakxa but graph properties test ko code garna baki xw confussion bhako xw sodherw garne aba*/
