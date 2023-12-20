#include<iostream>
using namespace std;
	struct person{
		int id;
	    char name[10];
	};
int main(){

	struct person p1;
	cout<<"Enter the name for person 1: ";
	cin.get(p1.name,50);
	cout<<"Enter the id for person 1: ";
	cin>>p1.id;
	cout<<"Displaying information- \n";
	cout<<"Name:"<<p1.name;
	cout<<endl<<"Id: "<<p1.id;
	
	
	
}
