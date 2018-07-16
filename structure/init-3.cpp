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
	cin>>s.roll;
	cin>>s.name;
	cin>>s.fees;
	cin>>s.grade;
	
	cout<<s.roll<<endl;
	cout<<s.name<<endl;
return 0;
}
