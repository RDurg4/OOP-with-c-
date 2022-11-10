#include<iostream>
using namespace std;
class student
{
	public:
	int stdid;
	string stdname;
	void getpersonaldetails()
	{
		cout<<"Enter stdID "<<endl;
		cin>>stdid;
		cout<<"Enter student name "<<endl;
		cin>>stdname;
	};
	void putpersonaldetails()
	{
		cout<<"StudentID "<<stdid<<endl;
		cout<<"Studentname "<<stdname<<endl;
	};
};
class teacher
{
	public:
	int tid;
	string tname;
	void getpersonaldetails()
	{
		cout<<"Enter teacherID "<<endl;
		cin>>tid;
		cout<<endl<<"Enter teacher name ";
		cin>>tname;
	}
	void putpersonaldetails()
	{
		cout<<"TeacherID "<<tid<<endl;
		cout<<"Teachername "<<tname;
	};
	
};
class gradecard
{
	public:
	int stdid,tid,intm1,intm2,asmark1,asmark2,totinternalmark,endsemmark,total;
	float GPA;
	void entermarks()
	{
		cout<<"Enter student id "<<endl;
		cin>>stdid;
		cout<<"Enter teacher id "<<endl;
		cin>>tid;
		cout<<"Enter internal mark 1 "<<endl;
		cin>>intm1;
		cout<<"Enter internal mark 2 "<<endl;
		cin>>intm2;
		cout<<"Enter assesment mark 1 "<<endl;
		cin>>asmark1;
		cout<<"Enter assessment mark 2 "<<endl;
		cin>>asmark2;
		totinternalmark=intm1+intm2+asmark1+asmark2;
		cout<<"Enter end sem marks ";
		cin>>endsemmark;
		total=endsemmark + totinternalmark;
	};
	void compute()
	{
		cout<<"Total= "<<total<<endl;
		if(total>90)
		{
			GPA=10;
		}
		if(total>80)
		{
			GPA=9;
		}
		if(total>70)
		{
			GPA=7;
		}
	}
	void viewgradecard()
	{
		cout<<"Stdid is: "<<stdid<<endl;
		cout<<"Mark is: "<<total<<endl;
		cout<<"GPA= "<<GPA<<endl;
	}
};
gradecard gd1;
int main()
{
	student st1;
	teacher tchr1;
	st1.getpersonaldetails();
	st1.putpersonaldetails();
	tchr1.getpersonaldetails();
	tchr1.putpersonaldetails();
	gd1.entermarks();
	gd1.compute();
	gd1.viewgradecard();
	return 0;
}

		
