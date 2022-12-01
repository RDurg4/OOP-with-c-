#include<iostream>
using namespace std;
static int count=1;
class students{
	private:
		int contact;
		string email;
		float semgpa[8],totalcgpa,total=0;
		void compute(){
			totalcgpa=total/8;
			cout<<"Total cgpa "<<totalcgpa<<endl;
		}
	public:
		int rno;
		string Sname;
		students(){
			rno=count;
			cout<<"CONSTRUCTED ROLLNO"<<endl;
			rno++;
			
		}
		void getdata(){
			cout<<"Name of the student:";
			cin>>Sname;
			cout<<"Contact Number:";
			cin>>contact;
			cout<<"Email Address:";
			cin>>email;
			cout<<"Enter sgpa in order: ";
			for(int i=0;i<8;i++){
				cin>>semgpa[i];
				total=total+semgpa[i];
				
			}
			compute();
		}
		void putdata(){
			cout<<"Rollno: "<<rno<<endl;
			cout<<"Name: "<<Sname<<endl;
			cout<<"Contact: "<<contact<<endl;
			cout<<"Email Address: "<<email<<endl;
			cout<<"CGPA "<<totalcgpa<<endl;
		}
};
int main(){
	students obj1;
	obj1.getdata();
	obj1.putdata();
}


