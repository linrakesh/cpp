// read student record

#include<fstream>
#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	char address[100];
};

int main(){
	ifstream fin("student.dat");
	student s;
//	fin>>s.roll>>s.name>>s.address;
	while(fin.read((char*)&s,sizeof(student))){
		 //binary mode read
		cout<<"\n Roll :"<<s.roll;
		cout<<"\n Name :"<<s.name;
		cout<<"\n Address :"<<s.address;
	}
	
	fin.close();
	return 0;
}
