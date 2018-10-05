#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	float fees;
};

int main(){
	student *s;
	cout<<"\n\n\n Size of s :"<<sizeof(s);
	
	s = new(student);
	
	cout<<"\n Enter Roll :";
	cin>>s->roll;
	
	cout<<"\n Enter name :";
	cin>>s->name;
	cout<<"\n Enter fees :";
	cin>>s->fees;
	
	cout<<"\n\n\n Size of s :"<<sizeof(s);
	
	cout<<"\n Roll No :"<<s->roll;
	cout<<"\n Name    :"<<s->name;
	cout<<"\n fees    :"<<s->fees;
	
	delete(s);
	
	cout<<"\n Roll No :"<<s->roll;
	cout<<"\n Name    :"<<s->name;
	cout<<"\n fees    :"<<s->fees;
	
	return 0;
}
