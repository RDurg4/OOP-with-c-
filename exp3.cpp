#include<iostream>
#include<string>
using namespace std;
static int count=1;
class employee
{
	public:
		int eno,basic,da,it,netsalary;
		string ename;
		employee()
		{
		eno=count;
		count++;
		}
		
		void getdata()
		{
		cout<<"\nenter your name:\n";
		cin>>ename;
		cout<<"enter your basic salary\n";
		cin>>basic;
		}

		~employee()
		{
		}

		void putdata()
		{
		compute();
		cout<<"NAME:"<<ename<<"\nEMPLOYEE NO: "<<eno<<"\nBASIC: "<<basic<<"\nINCOME TAX: "<<it<<"\nDEARNESS ALLOWANCE: "<<da <<"\nNET SALARY: "<<netsalary;
		}
		
	private:
		void compute()
		{
		da=0.52*basic;
		if (basic<10000)
		{
			it=0;
		}
		else if(basic<20000 && basic>10000)
		{
			it=basic/10;
		}
		else if(basic<30000 && basic>20000)
		{
			it=0.2*basic;
		}
		else if(basic<40000 && basic>30000)
		{
			it=0.3*basic;
		}
		netsalary=(basic+da)-it;
		}
		
};
int main()
{
employee emp1,emp2;
emp1.getdata();
emp1.putdata();
emp2.getdata();
emp2.putdata();
}


