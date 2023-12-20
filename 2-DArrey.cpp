#include<iostream>
using namespace std;
int main(){
	int r,c,i,j;
	cout<<"Enter the size for row: ";
	cin>>r;
	cout<<"Enter the size for column: ";
	cin>>c;
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++){
			cout<<"Enter the Values: ";
			cin>>a[i][j];
		}
	}
	cout<<"The values are "<<endl;
	for(i=0;i<r;i++){
		for(j=1;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
