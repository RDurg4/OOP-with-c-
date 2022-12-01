#include <iostream>
using namespace std;
class matrix
{
	public : 
		int mat[2][2];
	matrix()
	{
		mat[0][0]=0;
		mat[0][1]=0;
		mat[1][0]=0;
		mat[1][1]=0;
	}
	matrix(int a,int b,int c,int d)
	{
		mat[0][0]=a;
		mat[0][1]=b;
		mat[1][0]=c;
		mat[1][1]=d;	
	}
	matrix addmat(matrix a,matrix b)
	{
		matrix c;
		c.mat[0][0]=a.mat[0][0]+b.mat[0][0];
		c.mat[0][1]=a.mat[0][1]+b.mat[0][1];
		c.mat[1][0]=a.mat[1][0]+b.mat[1][0];
		c.mat[1][1]=a.mat[1][1]+b.mat[1][1];
		return c;
	}
	void display()
	{
		cout<<"Matrix"<<endl<<mat[0][0]<<"\t"<<mat[0][1]<<endl<<mat[1][0]<<"\t"<<mat[1][1]<<endl;
	}
	~matrix()
	{
		cout<<"Executed destructor"<<endl;
	}
};
int main()
{
	matrix a(1,2,3,1),b(1,1,1,1),c;
	c=c.addmat(a,b);
	c.display();
	return 0;
}

