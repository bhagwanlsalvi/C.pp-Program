#include <iostream>
using namespace std;
int main(){
	int monthnumber;
	cout<<"Enter Month Number(1-12):  ";
	cin>>monthnumber;
	switch(monthnumber)
	
	{
	case 2:
		cout<<"28 Days";
		break;
	case 1:
	case 3:	
	case 5:
	case 7:
	case 8:	
	case 10:
	case 12:
	cout<<"31 Days";
	break;
	case 4:	
	case 6:
	case 9:
	case 11:
	cout<<"30 Days"	;
	break;
	dafault:
	cout<<"wrang"	;
	}
}
