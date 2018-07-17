#include<iostream>
#include<string.h>
using namespace std;

class student{
	private:
		int roll;
		char name[30];
		void get_data();    // function prototype
	public:
		
		void show_data(){
			get_data();       // do not mention any object here
			cout<<"\n Roll no :"<<roll;
			cout<<"\n Name    :"<<name;
		}
};
// define member function outside

void student::get_data(){
	cout<<"\n Enter roll no :";
	cin>>roll;
	cout<<"\n Enter name :";
	cin>>name;
} 

int main(){
	student s;

	s.show_data();
	return 0;
}
