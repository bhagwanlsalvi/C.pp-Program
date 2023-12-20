#include<iostream>
using namespace std;
class Parent{
	public:
		void _print(){
			cout<<"Parent Class";
			
		}
};
class Child:public Parent{
	public:
		void _print(){
			cout<<"Child Class";
		}
};
int main(){
	Child c;
	c._print();
}

  


