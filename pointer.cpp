#include<iostream>
using namespace std;
//	struct person{
//		int id;
//	    char name[10];
//	};

int main(){
//	int a,*b;
//	b=&a;
//	a=10;
//	cout<<b;
//	cout<<endl<<*b;
//	cout<<endl<<&a;
//	cout<<endl<<*(&a);
    int a,*p,**q;
    a=20;
	p=&a;
	q=&p;
	cout<<"Address of a is: "<<p;  
	cout<<"\nvalue of a is: "<<*p;
	cout<<"\nAddress of p is: "<<q;
	cout<<"\nvalue of p is: "<<*q;
	cout<<"\nAddress of q is: "<<&q;
	cout<<"\nvalue of q is: "<<q;
}
	
