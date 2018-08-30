// read student record

#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class student{
		int roll;
		char name[30];
		char address[100];
	public:
		void read_data(){
			cin>>roll;
			cin>>name;
			cin>>address;
		}
		void show_data(){
			cout<<"\n Roll :"<<roll;
			cout<<"\n Name :"<<name;
			cout<<"\n Address :"<<address;
		}
		int reroll(){
			return roll;
		}
		char* retName(){
			return name;
		}
};

int main(){
	ifstream fin("student.dat");
	student s;
//	fin>>s.roll>>s.name>>s.address;

	while(fin.read((char *)&s,sizeof(student)))
	  {
	    if(strcmp(s.retName(),"saaurabh")==0)
			s.show_data();
		}
	fin.close();
	return 0;
}
