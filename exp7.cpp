#include <iostream>
#include <string>
using namespace std;
class student
{
	public:
	int rno;
	string sname;
	void getstudentdata()
	{
		cout<<"Enter Student Data"<<endl<<endl;
		cout<<"Enter Roll number:";
		cin>>rno;
		cout<<"Enter Name:";
		cin>>sname;
	}
};
class test:public student
{
	public:
	int marksub1, marksub2, marksub3;
	void getmarks()
	{
		cout<<"Enter Marks"<<endl<<endl;
		cout<<"Enter Marks of Subject 1:";
		cin>>marksub1;
		cout<<"Enter Marks of Subject 2:";
		cin>>marksub2;
		cout<<"Enter Marks of Subject 3:";
		cin>>marksub3;
	}
};
class result:public test
{
	public:
	int total;
	void putresult()
	{
		total= marksub1+marksub2+marksub3;
		cout<<"Roll number : "<<rno<<endl;
		cout<<"Name :"<<sname<<endl;
		cout<<"Total :"<<total<<endl;
	}
};
int main()
{
	result obj1;
	obj1.getstudentdata();
	obj1.getmarks();
	obj1.putresult();
}



