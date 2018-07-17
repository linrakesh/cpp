#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
	public:
		char fname[30];
};

int main(){
	student s;
	//s.roll = 10;
	strcpy(s.fname,"ramji");
	cout<<s.fname;
	
	return 0;
}
