// structure as a function parameter


#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	char fname[30];
};
void print_data(student r){
	cout<<"\n Roll :"<<r.roll;
	cout<<"\n Name :"<<r.name;
	cout<<"\n Father Name" <<r.fname;
}

int main(){
	student s={10,"Swapnil","R.K. Sharma"};
	print_data(s);
	return 0;
}
