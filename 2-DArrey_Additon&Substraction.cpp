#include<iostream>
using namespace std;
int main(){	
	int r1,c1,r2,c2,i,j,sum[2][2],sub[2][2];
	
	cout<<"Enter the size of row: ";
	cin>>r1;
	cout<<"Enter the size of column: ";
	cin>>c1;
	int a[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<"Enter the values: ";
			cin>>a[i][j];
		}
	}
	cout<<"Enter the size of row: ";
	cin>>r2;
	cout<<"Enter the size of column: ";
	cin>>c2;
	int b[r2][c2];
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cout<<"Enter the values: ";
			cin>>b[i][j];
		}
	}
	cout<<"Addition of 2D Array: "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){			
		 sum[i][j]=a[i][j]+b[i][j];
			cout<<sum[i][j]<<endl;
		}
	}
	cout<<"Substraction of 2D Array: "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){			
		 sub[i][j]=a[i][j]-b[i][j];
			cout<<sub[i][j]<<endl;
		}
	}
}
