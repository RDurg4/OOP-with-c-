#include <iostream>
using namespace std;
 
class Complex{
	public:
  		float real;
  		float img;
  
		Complex operator/(const Complex &obj){
		   Complex temp;
		   temp.real=(real*obj.real+img*obj.img)/(obj.real*obj.real+obj.img*obj.img);
		   temp.img=(img*obj.real-real*obj.img)/(obj.real*obj.real+obj.img*obj.img);
		   return temp;
		 }
		 void display(){
		   cout << real << " + " << img << "i" << endl;
		 }
};
 
int main()
{
	Complex a,b,c;
	cout<<"Enter the first coefficients of real and imaginary:"<<endl;
	cin>>a.real;
	cin>>a.img;
	cout<<"Enter the second coefficients of real and imaginary:"<<endl;
	cin>>b.real;
	cin>>b.img;
	c=a/b;
	c.display();
	return 0; 
}
