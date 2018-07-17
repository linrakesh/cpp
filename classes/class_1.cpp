#include<iostream>
#include<string.h>
using namespace std;

class student{
	private:
		int roll;
		char name[30];
	public:
		void get_data(){
			cout<<"\n Enter Roll :";
			cin>>roll;
			cout<<"\n Enter Name :";
			cin>>name;
		}
		void show_data(){
			cout<<"\n Roll no :"<<roll;
			cout<<"\n Name    :"<<name;
		}
	};

int main(){
	student s;
	s.get_data();
	s.show_data();
	return 0;
}
