#include <iostream>
using namespace std;
int main (){
	
	int user;
	cout<"Maths calculate";
	
	cout<<"\n1)- Rectange\n";
	cout<<"\n2)- Triangle\n";
	cout<<"\n3)- Square\n";
	cout<<"\n4)- Circle\n";
	cout<<"Enter the Choice :- ";
	cin>>user;
	
	switch(user)
	

	{
		
		
	case 1:{
		cout<<"Rectangle";
		int length,width,area;
		cout<<"Enter the Length :- ";
		cin>>length;
		cout<<"Enter the Width :- ";
		cin>>width;
		area= length*width;
		cout<<"Area of Rectangle :- "<<area;
		break;
	}
	
	case 2:{
		cout<<"Triangle";
		int height,base,triangle;
		cout<<"Enter the Height :- ";
		cin>>height;
		cout<<"Enter the Base :- ";
		cin>>base;
		triangle= 0.5 *base*height;
		cout<<"Area of Triangle :- "<<triangle;
		break;
	}
	
	case 3:{
		cout<<"Square";
		int side,square;
		cout<<"Enter the Side :- ";
		cin>>side;
		square= side*side;
		cout<<"Area of Square :- "<<square;
		break;
	}
	
	case 4:{
		cout<<"Circle";
		int radius,circle;
		cout<<"Enter the Radius :- ";
		cin>>radius;
		circle= 3.14*radius*radius;
		cout<<"Area of Circle :- "<<circle;
		break;
	}
	}

}







