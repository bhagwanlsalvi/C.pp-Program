#include<iostream>
using namespace std;
class A{
	public: void fun_a()
	{
		cout<<"\nfunction of A class called";
	}
};
class B:public A{
	public:
		void fun_b(){
			cout<<"\nfunction of B class called";
		}
};
int main(){
B b;
b.fun_a();
b.fun_b();	
}
