#include<iostream>
#include<string.h>
using namespace std;
	struct student{
	int roll;
	char name[30];
	float fees;
	char grade;
	char std[10];
}s={10,"saurabh sethi",2350.50,'B'};  // initialization method-4

int main()
{

	
	cout<<s.roll<<endl;
	cout<<s.name<<endl;
return 0;
}
