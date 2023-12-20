#include<iostream>
using namespace std;
class student{
	protected:
		int rno;
		public:
			void get_rno(int x)
			{
				rno=x;
			}
			void show_rno(){
				cout<<"\nRoll No.: "<<rno;
			}
};

class marks:public student{
	protected:
		int sub1,sub2;
		public:
			void get_marks(int x,int y){
				sub1=x;
				sub2=y;
			}
			void show_marks(){
				cout<<"\nMarks of Subject 1: "<<sub1;
				cout<<"\nMarks of Subject 2: "<<sub2;
			}
};
class result:public marks{
	protected:
		int tot;
		public:
			void tot_marks(){
				tot=sub1+sub2;
				cout<<"\nTotal marks: "<<tot;
			}
};

int main(){
	result r;
	r.get_rno(101);
	r.get_marks(87,95);
	r.show_rno();
	r.show_marks();
    r.tot_marks();
}
