/*Write an object-oriented C++ program to implement a small-scale medical clinic. Detailed attributed and member functions are given  in the document attached. Develop a Menu Driven program using Switch – Case.
MENU
1.     getPatientInfo
2.     putPatientInfo
3.     makeAppointment
4.     Diagnosis
5.     Billing
6.     printBill*/

#include<iostream>
using namespace std;
class clinic
{
	public:
		int patientid;
		string pname;
		void getpatientinfo();
		void putpatientinfo();
		void makeappointment();
		void diagnosis();
		void billing();
		void printbill();
	private:
		int phone, docfee, medcharge, total;
		string address,gender,bldgrp,dname,diaginfo,medinfo,date;
};
void clinic::getpatientinfo()
{
	cout<<"Enter patientID"<<endl;
	cin>>patientid;
	cout<<"Enter patient name"<<endl;
	cin>>pname;
	cout<<"Enter Address"<<endl;
	cin>>address;
	cout<<"Enter Gender"<<endl;
	cin>>gender;
	cout<<"Enter phone number"<<endl;
	cin>>phone;
	cout<<"Enter blood group"<<endl;
	cin>>bldgrp;
};
void clinic::putpatientinfo()
{
	cout<<"Patient ID	"<<patientid<<endl;
	cout<<"Patients name	"<<pname<<endl;
	cout<<"Address	"<<address<<endl;
	cout<<"Gender	"<<gender<<endl;
	cout<<"Phoneno:	"<<phone<<endl;
	cout<<"Blood Group	"<<bldgrp<<endl;
};
void clinic::makeappointment()
{
	cout<<"Enter doctors name ";
	cin>>dname;
	cout<<endl<<"Enter date of appointment";
	cin>>date;
	cout<<endl;
};
void clinic::diagnosis()
{
	cout<<"Enter patient's diagnosis "<<endl;
	cin>>diaginfo;
	cout<<endl<<"Enter medicines prescribed "<<endl;
	cin>>medinfo;
	cout<<endl;
};
void clinic::billing()
{
	cout<<endl<<"Enter doctors fee";
	cin>>docfee;
	cout<<endl<<"Enter medicine charge";
	cin>>medcharge;
	total=medcharge+docfee;
};
void clinic::printbill()
{
	cout<<date<<"	"<<dname<<endl;
	cout<<"Doctors fee "<<docfee<<endl;
	cout<<"Medicinal charges "<<medcharge<<endl;
	cout<<"Total	"<<total<<endl;
};
main()
{
	clinic obj1;
	cout<<"1.Getpatientinfo \n2.Putpatientinfo \n3.Makeappointment \n4.Diagnosis \n5.Billing \n6.Printbill\n7.EXIT"<<endl;	
	int ch,p=0;
	while(p==0)
	{
		cout<<"Enter your choice ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				obj1.getpatientinfo();
				break;
			}
			case 2:
			{
				obj1.putpatientinfo();
				break;
			}
			case 3:
			{
				obj1.makeappointment();
				break;
			}
			case 4:
			{
				obj1.diagnosis();
				break;
			}
			case 5:
			{
				obj1.billing();
				break;
			}
			case 6:
			{
				obj1.printbill();
				break;
			}
			case 7:
			{
				cout<<"Exiting";
				p=p+1;
				break;
			}
		}
	}
}

