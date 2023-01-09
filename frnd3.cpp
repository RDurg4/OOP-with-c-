#include <iostream>
using namespace std;
static int count=1;
class student
{
private:
int rno,m1,m2,tot;
public:
student()
{
	rno=count;
	count=count+1;
}
void display()
{
	cout<<"\nroll no: "<<rno<<"\nmarks of the first subject: "<<m1<<"\nmarks of the second subject: "<<m2<<"\ntotal marks: "<<tot;
}
friend class teacher;
};
class teacher
{
public:
void entermarks(student&t)
{
	cout<<"\nenter the marks of the first subject:\n";
	cin>>t.m1;
	cout<<"\nenter the marks of the second subject:\n";
	cin>>t.m2;
	t.tot=t.m1+t.m2;
}
void topper(student t[])
{
	student large;
	large=t[0];
	for(int i=1;i<5;i++)
	{	
		if(large.tot<t[i].tot)
		{
			large=t[i];
		}
	}
	cout<<"\ntopper is: "<<large.rno;
}
};
int main()
{
student obj[5];
teacher binu;
for(int i=0;i<5;i++)
{
	cout<<"enter the marks of the "<<i+1<<"th student:";
	binu.entermarks(obj[i]);
}
for(int i=0;i<5;i++)
{
	cout<<endl<<i+1<<" student:\n";
	obj[i].display();
}
binu.topper(obj);
}

