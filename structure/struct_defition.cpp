#include<iostream>
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

	student s={10,"Saurabh",1234.56,'A',"12A"};
	cout<<s.roll<<endl;
	cout<<s.name<<endl;
	return 0;
}
