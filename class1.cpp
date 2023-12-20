#include<iostream>
using namespace std;
class demo{
	private:
		int a;
	public:
	void get()
	{
		cin>>a;
	}	
	void show(){
		cout<<"\na= "<<a;
	}
};
int main(){
	demo d,d1;
	d.get();
	d.show();
	d1.get();
	d1.show();
}
