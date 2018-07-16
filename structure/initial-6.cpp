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
	
	r=s;
	
	cout<<"copied Roll :"<<r.roll<<endl;
	cout<<"copied name : "<<r.name<<endl;
return 0;
}
