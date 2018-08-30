// read student record

#include<fstream>
#include<iostream>
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
};

int main(){
	ofstream fout("student.dat",ios::app);
	student s;
//	fin>>s.roll>>s.name>>s.address;
	s.read_data();
	fout.write((char *)&s,sizeof(student));
	fout.close();
	return 0;
}
