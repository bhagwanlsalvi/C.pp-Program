#include<iostream> 

using namespace std; 
int add(int a,int b){
	return(a+b);
}
void add(){
	int a,b;
	cout<<"Enter Two values: ";
	cin>>a>>b;
	cout<<"Addition is : "<<(a+b)<<endl;
}
int main(){
	int x,y;
	cout<<"Enter Two values: ";
	cin>>x>>y;
	cout<<"Addition is: "<<add(x,y);
	add();
}
