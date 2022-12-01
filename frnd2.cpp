#include<iostream>
using namespace std;
static int count=1;
class student{
	private:
		int Rno,m1,m2,total;
	public:
		student(){
			Rno=count;
			count++;
		}
		void display(){
			cout<<"RollNo:"<<Rno<<endl;
			cout<<"marks1:"<<m1<<endl;
			cout<<"marks2:"<<m2<<endl;
			cout<<"TotalMarks:"<<total<<endl;
		}
	friend class teacher;
};	
class teacher{
	public:
		void entermarks(student &t){
			cout<<"Enter mark1:";
			cin>>t.m1;
			cout<<"Enter mark2:";
			cin>>t.m2;
			t.total=t.m1+t.m2;
		}
		void Topper(student t[]){
			student large;
			large=t[0];
			for(int i=0;i<10;i++){
				if(large.total<t[i].total){
					large=t[i];
				}
				cout<<"Topper"<<large.Rno;
			}
		}
};
int main(){	
	student obj[10];
	teacher Binu;
	for(int i=0;i<10;i++){
		Binu.entermarks(obj[i]);
		obj[i].display();
	}
}
