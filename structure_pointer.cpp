#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	float fees;
};

int main(){
	student s ={10,"Swapnil",3456.96};
	cout<<"\n Roll No :"<<s.roll;
	cout<<"\n Name    :"<<s.name;
	cout<<"\n fees    :"<<s.fees;
	
	cout<<"\n\n\n Size of s :"<<sizeof(s);
	
	student *s1 = &s;
	
	cout<<"\n Roll No :"<<s1->roll;
	cout<<"\n Name    :"<<s1->name;
	cout<<"\n fees    :"<<s1->fees;
	
	cout<<"\n Size of s1 :"<<sizeof(s1);
	
	return 0;
}
