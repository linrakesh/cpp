#include<iostream>
#include<string.h>
using namespace std;
	struct student{
	int roll;
	char name[30];
	float fees;
	char grade;
	char std[10];
};

int main()
{

	student s;
	// initialise structure variable
	s.roll=10;
	strcpy(s.name,"saurabh");
	s.fees = 1234.56;
	s.grade='A';
	
	cout<<s.roll<<endl;
	cout<<s.name<<endl;
return 0;
}
