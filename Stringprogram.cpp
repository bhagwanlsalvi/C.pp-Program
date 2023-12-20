#include<iostream>

using namespace std;
int main(){
	char city[]="Ajmoier220@";
	int c=0;
	int v=0,co=0,ss=0,d=0;
	while(city[c]!='\0')
	{
		if((city[c]=='a'||city[c]=='e'||city[c]=='i'||city[c]=='o')&&(city[c]=='A'||city[c]=='E'||city[c]=='I'||city[c]=='O'))
			{
				v++;
			}
		else if ((city[c]>='a'&&city[c]<='z')||(city[c]>='A'&&city[c]<='Z')	)
		{
			co++;
		}
		else if(city[c]>='0'&&city[c]<='0')
		{
			d++;
		}
		else{
			ss++;
		}
		
		
		c++;
	}
    cout<<"The length of string is : "<<c<<endl;
	cout<<"The number of vowel is : "<<v<<endl;
	cout<<"The no of consonant is : "<<co<<endl;
	cout<<"The no of number is : "<<d<<endl;
	cout<<"The no of special symbol is : "<<ss<<endl;
}
