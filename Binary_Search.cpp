#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	int i,x,beg,mid,end;
	cout<<"Binary Search";
	for(i=0;i<n;i++){
		cout<<"Enter the Value: ";
		cin>>a[i];
	}
	cout<<"Enter the Element to search";
	cin>>x;
	beg=0,end=n-1;
	mid=(beg+end)/2;
	while(beg<=end){
		if(a[mid]==x){
			cout<<"Element founded at"<<mid+1;
			break;
		}
		else if(a[mid]>x){
			end=mid;
		}
		else{
			beg=mid;
		}
		mid=(beg+end)/2;
}
if(beg>end){
	cout<<"Element Not found";
}
}
