#include<iostream>
using namespace std;
static int count=1;
class student
{
	public:
		int stdid;
		string sname,phone,email;
		float Sub1_IA,Sub1_ESE,Sub1A,Sub2_IA,Sub2_ESE,Sub2A,Sub3_IA,Sub3_ESE,Sub3A,total,cgpa;
		student()
		{
			stdid=count++;
			Sub1_IA=40;
			Sub1_ESE=100;
			Sub2_IA=48;
			Sub2_ESE=95;
			Sub3_IA=35;
			Sub3_ESE=89;
		}
		void getdata();
		void displaycard();
		friend class subjectteacher;
		friend class classteacher;
	
};

void student::getdata()
{
	cout<<"Enter name of the student :";
	cin>>sname;
	cout<<"Enter phone number of the student :";
	cin>>phone;
	cout<<"Enter email address of the student :";
	cin>>email;
}

void student::displaycard()
{
	cout<<"STUDENT NAME:"<<sname<<endl;
	cout<<"STUDENT CONTACT:"<<phone<<endl;
	cout<<"STUDENT EMAIL:"<<email<<endl;
	cout<<"SUBJECT 1 IA:"<<Sub1_IA<<endl;
	cout<<"SUBJECT 1 ESE:"<<Sub1_ESE<<endl;
	cout<<"SUBJECT 1 TOTAL:"<<Sub1_IA+Sub1_ESE<<endl;
	cout<<"SUBJECT 1 ATTENDANCE PERCENTAGE:"<<Sub1A<<endl;
	cout<<"SUBJECT 2 IA:"<<Sub2_IA<<endl;
	cout<<"SUBJECT 2 ESE:"<<Sub2_ESE<<endl;
	cout<<"SUBJECT 2 TOTAL:"<<Sub2_IA+Sub2_ESE<<endl;
	cout<<"SUBJECT 2 ATTENDANCE PERCENTAGE:"<<Sub2A<<endl;
	cout<<"SUBJECT 3 IA:"<<Sub3_IA<<endl;
	cout<<"SUBJECT 3 ESE:"<<Sub3_ESE<<endl;
	cout<<"SUBJECT 3 TOTAL:"<<Sub3_IA+Sub3_ESE<<endl;
	cout<<"SUBJECT 3 ATTENDANCE PERCENTAGE:"<<Sub3A<<endl;
	cout<<"SUBJECT TOTAL:"<<total<<endl;
	cout<<"STUDENT CGPA:"<<cgpa<<endl;
}
static int c=1;
class subjectteacher
{
	public:
		int empid;
		string ename,ephone,eemail;
		
		subjectteacher()
		{
			empid=c++;
		}
		void getdata();
		void entermarks(student &t)
		{	
			
			if(empid == 1){
				cout<<"IA of sub1:";
				cin>>t.Sub1_IA;
				cout<<"ESE of sub1:";
				cin>>t.Sub1_ESE;

				
			}
			if(empid == 2){
				cout<<"IA of sub2:";
				cin>>t.Sub2_IA;
				cout<<"ESE of sub2:";
				cin>>t.Sub2_ESE;
			}
			if(empid == 3){
				cout<<"IA of sub3:";
				cin>>t.Sub3_IA;
				cout<<"ESE of sub3:";
				cin>>t.Sub3_ESE;
			
			}
			
		}
		void enteratt(student  &t)
		{
			if(empid == 1){
				cin>>t.Sub1A;}
			
			if(empid == 2){
				cin>>t.Sub2A;}
			if(empid == 3){
				cin>>t.Sub3A;}
			
		}
		
};
void subjectteacher::getdata()
{
	cout<<"Enter name of the student :";
	cin>>ename;
	cout<<"Enter phone number of the student :";
	cin>>ephone;
	cout<<"Enter email address of the student :";
	cin>>eemail;
}
class classteacher
{
	public:
		int eid;
		string ename,ephone,eemail;
		classteacher(){
			eid=4;
		}
		void getdata()
		{
			cout<<"Enter name of the class teacher :";
			cin>>ename;
			cout<<"Enter phone number of class teacher :";
			cin>>ephone;
			cout<<"Enter email address of the class teacher :";
			cin>>eemail;	
		}
		void caltotal(student &t)
		{
			t.total=t.Sub1_IA + t.Sub1_ESE + t.Sub2_IA + t.Sub2_ESE + t.Sub3_IA + t.Sub3_ESE;
		}
		void cgpa(student &t)
		{
			t.cgpa=(t.total/450)*10;
		}
		void eligibility(student &t)
		{
			if(((t.Sub1A +t.Sub1A+t.Sub1A)/3)>75){
				cout<<"Eligible"<<endl;
			}
			else
				cout<<"Not eligible."<<endl;
		}
		void ranklist(student t[])
		{
			int i,j;
			student temp;
			//sorting - Descending ORDER
			for(i=0;i<2;i++)
			{		
				for(j=i+1;j<2;j++)
				{
					if(t[i].total<t[j].total)
					{
						temp =t[i];
						t[i]=t[j];
						t[j]=temp;
					}
				}
			}
			cout<<"RANK LIST:"<<endl;
			cout<<"RollNO  CGPA  Rank "<<endl;
			int rank=1;
			for(i=0;i<2;i++){
				cout<<t[i].stdid<<"\t"<<t[i].cgpa<<"\t"<<rank<<endl;
				rank+=1;
			}
			cout<<endl;	
			 
		}
};
int main()
{
	student s[2];
	int j=0;
	for(j=0;j<2;j++){
		s[j].getdata();}
	subjectteacher st[3];
	for(int j=0;j<2;j++){
		for(int i=0;i<3;i++){
			cout<<"Teacher"<<i+1<<"\n"<<",enter marks of student"<<j+1<<" for subject"<<i+1<<endl;
			st[i].entermarks(s[j]);
			cout<<"Enter attendance percentage:";
			st[i].enteratt(s[j]);
		}
	}
	classteacher c;
	c.getdata();
	for(j=0;j<2;j++){
		c.caltotal(s[j]);
		c.cgpa(s[j]);
		c.eligibility(s[j]);}
	for(j=0;j<2;j++)
		s[j].displaycard();
	c.ranklist(s);
	return 0;
}
