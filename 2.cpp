#include<iostream>
using namespace std;
class car
{
	private:
		int ltr;
		double con;
	public:
		double maxdis;
		double maxdist();
		car()
		{
			ltr=40;
			con=0.1;
		}
		car(int a,double b)
		{
			ltr=a;
			con=b;
			cout<<"A car with litres "<<a<<"and consumption of "<<b<<"has been created"<<endl;
		}
		~car()
		{
			cout<<"A car with given features have been destroyed"<<endl;
		}
};
double car::maxdist()
{
	maxdis=ltr/con;
	cout<<"The max distance travelled is "<<maxdis<<endl;
	return maxdis;
}
int main()
{
	double c3,c4;
	car c1;
	c3=c1.maxdist();
	car c2(00,0.4);
	c4=c2.maxdist();
	cout<<"Max dist is "<<c4<<endl;
	return 0;
}
