#include<iostream>
using namespace std;
class my_class{
	public:
		int a,b;
		my_class()
		{
			cout<<"Executing default constructor"<<endl;
			cout<<"Enter first number"<<endl;
			cin>>a;
			cout<<"Enter second number"<<endl;
			cin>>b;
		}
		my_class(int x,int y)
		{
			cout<<"Executing parametrized constructor"<<endl;
			a=x;
			b=y;
		}
		~my_class()
		{
			cout<<"Executing destructor"<<endl;
		}
		void Display()
		{
			cout<<"The value of x is:"<<a<<endl;
			cout<<"The value of y is:"<<b<<endl;
		}
	};
	int main()
	{
		my_class obj1;
		obj1.Display();
		my_class obj2(10,20);
		obj2.Display();
		return 0;
	}
