#include<iostream>
using namespace std;
int add()
{
	int a,b;
	cout<<"Enter the two values: ";
	cin>>a>>b;
	
	return(a+b);
}
int main(){
	int r=add();
	cout<<"\nAfter the Addition result is: "<<r;
}
