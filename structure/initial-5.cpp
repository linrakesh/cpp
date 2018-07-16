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
	student s={10,"saurabh sethi",2350.50,'B'}; 
	student r;
	
	//requirement - Initial R using S only
	//method -1
	r.roll = s.roll;
	strcpy(r.name , s.name);
	r.fees = s.fees;
	r.grade = s.grade;
	
	cout<<r.roll<<endl;
	cout<<r.name<<endl;
return 0;
}
