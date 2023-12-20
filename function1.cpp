#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c=a+b;
	return c;//function definition
}
int main()
{
	int x,y;
	x=10;
	y=20;
	int z=add(x,y);//function calling
	cout<<"The adition is : "<<z;
}

