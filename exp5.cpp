#include <iostream>
#include <string>
using namespace std;

class employee
{
	public:
	string name;
	long int phone;
	float salary;
	int age;
	employee()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter age:";
		cin>>age;
		cout<<"Enter phoneno:";
		cin>>phone;
		cout<<"Enter salary:";
		cin>>salary;
		cout<<endl;
	}
	void printSalary()
	{
		cout<<"Salary is"<<salary;
	}
};
class officer:public employee
{
	public:
	string spe;
	officer()
	{
	cout<<"Specialization of officer:";
	cin>>spe;
	}
};
class manager:public employee
{
	public:
	string dept;
	manager()
	{
	cout<<"Department of manager:";
	cin>>dept;
	cout<<endl<<endl;
	}
};
int main()
{
	cout<<"Enter details of Officer"<<endl<<endl;
	officer obj1;
	cout<<"Enter details of Manager"<<endl<<endl;
	manager obj2;
	cout<<"Details of Officer"<<endl<<endl;
	cout<<"Name:"<<obj1.name<<endl;
	cout<<"Age:"<<obj1.age<<endl;
	cout<<"Phone number:"<<obj1.phone<<endl;
	cout<<"Specialization"<<obj1.spe<<endl;
	obj1.printSalary();
	cout<<"Details of Officer"<<endl<<endl;
	cout<<"Name:"<<obj2.name<<endl;
	cout<<"Age:"<<obj2.age<<endl;
	cout<<"Department"<<obj2.dept<<endl;
	obj2.printSalary();
	return 0;
}
