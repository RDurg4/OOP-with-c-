#include<iostream>
#include <string>
using namespace std;
class student
{
	public:
	int rno,m1,m2;
	void getstudentdata()
	{
		cout<<"Enter Roll number: ";
		cin>>rno;
		cout<<"Enter Mark1: ";
		cin>>m1;
		cout<<"Enter Mark2: ";
		cin>>m2;
	}
};
class sport
{
	public:
	int gracemarks;
	void getsportsdata()
	{
		cout<<"Enter Grace marks received:";
		cin>>gracemarks;
	}
};
class report:public student,public sport
{
	public:
	int total;
	float avg;
	void displayreport()
	{
		total=m1+m2+gracemarks;
		avg=total/3;
		cout<<endl<<endl;
		cout<<"REPORT"<<endl;
		cout<<"Roll No :"<<rno<<endl;
		cout<<"Marks1 :"<<m1<<endl;
		cout<<"Marks2 :"<<m2<<endl;
		cout<<"Grace Marks :"<<gracemarks<<endl;
		cout<<"Total :"<<total<<endl;
		cout<<"Average :"<<avg<<endl;
	}
};
int main()
{
	cout<<"Enter Details of Student"<<endl;
	report obj1;
	obj1.getstudentdata();
	obj1.getsportsdata();
	obj1.displayreport();
	return 0;
}


