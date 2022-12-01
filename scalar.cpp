#include <iostream>
using namespace std;
class scalar
{
	public : 
		int data[3];
	scalar()
	{
		data[0]=0;
		data[1]=0;
		data[2]=0;
	}
	scalar(int a)
	{
		data[0]=a;
		data[1]=0;
		data[2]=0;
	}
	scalar(int a,int b)
	{
		data[0]=a;
		data[1]=b;
		data[2]=0;
	}
	scalar(int a,int b,int c)
	{
		data[0]=a;
		data[1]=b;
		data[2]=c;
	}
	scalar multiply(int a,scalar b)
	{
		scalar c;
		c.data[0]=a*b.data[0];
		c.data[1]=a*b.data[1];
		c.data[2]=a*b.data[2];
		return c;
	}
	void display()
	{
		cout<<"Vector "<<endl<<data[0]<<endl<<data[1]<<endl<<data[2]<<endl;
	}
	~scalar()
	{
		cout<<"Executed destructor"<<endl;
	}
};
int main()
{
	scalar a(1,2,3),c;
	c=c.multiply(3,a);
	//a.display();
	//b.display();
	c.display();
	return 0;
}

