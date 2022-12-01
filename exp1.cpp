#include <iostream>
using namespace std;
class student{
  public:
     int Rno,contact,cgpa;
     string email,Sname;
     int sgpa[8];

  void getdata()
  { 
      cout<<"Enter roll number "<<endl;
      cin>>Rno;
      cout<<"Enter Student name "<<endl;
      cin>>Sname;
      cout<<"Enter contact number "<<endl;
      cin>>contact;
      cout<<"Enter email ID "<<endl;
      cin>>email;
      cout<<"Enter SGPA in order "<<endl;
      for(int i=0;i<8;i++)
      {
      	cin>>sgpa[i];
      }
  }
  void putdata()
   {
     cout<<"Roll Number "<<Rno<<endl;
     cout<<"Name of the student "<<Sname<<endl;
     cout<<"Contact Number "<<contact<<endl;
     cout<<"Email ID "<<email<<endl;
     for(int n=0;n<8;n++)
       { 
         cout<<"sgpa: "<<sgpa[n]<<" "<<endl;
       }
   }
  void compute()
    {   int sum=0;
        for(int i=0;i<8;i++)
        {
        	sum=sum+sgpa[i];
        }
        cgpa=sum/8;
        cout<<endl<<"CGPA of the student "<<cgpa<<endl;
    }
};
int main()
{ 
  student s;
  s.getdata();
  s.putdata();
  s.compute();       
};
