#include<iostream>
using namespace std;
class vector
{
	public:
		int x[3],i;
	vector()
	{
		for(i=0;i<3;i++)
		{
			x[i]=1;
		}
	}
	vector(int a)
	{
		x[0]=a;
		x[1]=1;
		x[2]=1;
	}
	vector(int a,int b)
	{
		x[0]=a;
		x[1]=b;
		x[2]=1;
	}
	vector(int a,int b, int c)
	{
		x[0]=a;
		x[1]=b;
		x[2]=c;
	}
	~vector()
	{
		cout<<"Executed destructor"<<endl;
	}
	vector addvector(vector u,vector v)
	{
		vector w;
		w.x[0]=u.x[0] + v.x[0];
		w.x[1]=u.x[1] + v.x[1];
		w.x[2]=u.x[2] + v.x[2];
		return w;
	}
	void display()
	{
		cout<<x[0]<<endl<<x[1]<<endl<<x[2]<<endl;
	}
	void getdata()
	{
		int a;
		cout<<"Enter a vector"<<endl;
		cin>>a;
	}

};
int main()
{
	vector obj1;
	vector obj2(2),obj3(4,5);
	obj1=obj1.addvector(obj2,obj3);
	obj1.display();
}
