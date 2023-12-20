#include<iostream>
using namespace std;
class destroyed{
	static int a;
	public:
		destroyed(){
			a++;
			cout<<"\nObject no= "<<a<<"created";
		}
		~destroyed(){
			cout<<"\nObject no= "<<a<<"destroyed";
			a--;
		}
};
int destroyed::a;
int main(){
		{
			destroyed d1;
		
	}
	destroyed d2;

}
