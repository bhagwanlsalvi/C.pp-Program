#include<iostream>
using namespace std;
class demo
{ 
private:
	int l,b,a;
public:
void get()	{
	cout<<"Enter the value of length: ";
	cin>>l;
	cout<<"Enter the value of breadth: ";
	cin>>b;
}
void show(){
	a=l*b;
	cout<<"Area of rectangle: "<<a<<endl;
}
};

int main(){
	demo r1,r2,r3,r4;
	r1.get();	
	r2.get();	
	r3.get();	
	r4.get();
	r1.show();
	r2.show();
	r3.show();
	r4.show();
}
