#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==3){
			continue;
		}
		if(i==5){
			goto label1 
			;
		}
		cout<<i<<endl;
	}
	label1:
		cout<<"goto is used";
}
